#include <stdlib.h>

int    *ft_rrange(int start, int end){
    
    int len;
    if (start <= end){
        len = end - start + 1;
    }
    else {
        len = start - end + 1;
    }
    int *r  = malloc(len * sizeof(int));
    if (!r)
        return (NULL);
    int i = 0;
    while (i < len){
        if (start <= end)
            r[i] = end - i;
        else 
            r[i] = end + i;
        i++;
    }
    return (r);
}

#include <stdio.h>
int main(){
    int *r = ft_rrange(-1, 2);
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
