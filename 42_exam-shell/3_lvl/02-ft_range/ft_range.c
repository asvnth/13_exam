#include <stdlib.h>

int     *ft_range(int start, int end){
    int count; 
    if (start <= end)
        count = end - start + 1;
    else
        count = start - end + 1;
    int *r = malloc(count * sizeof(int));
    if (!r)
        return (NULL);
    int i = 0;
    while (i < count){
        if (start <= end)
            r[i] = start + i;
        else
            r[i] = start - i;
        i++;
    }
    return (r);
}

#include <stdio.h>
int main(){
    int *r = ft_range(-1, 2);
    int count;
    count = 2 - -1 + 1;
    if (!r)
        return (1);
    printf("[");
    for (int i = 0; i < count; i++){
        if (i != 0)
            printf(", ");
        printf("%d", r[i]);
    }
    printf("]\n");
    return (0);
}
