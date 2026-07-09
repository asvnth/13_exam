#include <unistd.h>

typedef struct s_list{
    struct s_list *next;
    void   *data;
}   t_list;

int ft_list_size(t_list *begin_list){
    int elems_nmbr = 0;
    while (begin_list){
        elems_nmbr++;
        begin_list = begin_list->next;
    }
    return (elems_nmbr);
}

/*
int main(){
    t_list a;
    t_list b;
    t_list c;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    int x = ft_list_size(&a);
    char z = x + '0';
    write (1, &z, 1);
    return (0);
}
*/
