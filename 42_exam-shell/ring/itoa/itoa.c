#include <stdlib.h>

char *itoa(int n){
    long nb = n, tmp = n;
    int len = (nb <= 0) ? 1 : 0;
    while (tmp){
        len++;
        tmp /= 10;
    }
    char *str = malloc(len + 1);
    if (!str)
        return NULL;
    str[len] = '\0';
    if (!nb)
        str[0] = '0';
    if (nb < 0)
        str[0] = '-';
    while (nb){
        str[--len] = '0' + (nb < 0 ? -(nb % 10) : nb % 10);
        nb /= 10;
    }
    return str;
}
#include <stdio.h>
int main(){
    printf("%s\n", itoa(-1111));
}
