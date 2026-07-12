#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *i;
    t_list  *j;
    int     tmp;

    i = lst;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (!cmp(i->data, j->data))
            {
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
    return (lst);
}

int ascending(int a, int b)
{
    return (a <= b);
}
#include <stdio.h>
int main(void)
{
    t_list c = {NULL, 4};
    t_list b = {&c, 1};
    t_list a = {&b, 3};
    t_list *lst = &a;

    lst = sort_list(lst, ascending);
    while (lst)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
    return (0);
}
