#include <stdlib.h>
char *itoa_base(int val, int base){
    char *digits = "0123456789abcdef";
    long n = val;
    int len = (n <= 0) ? 1 : 0;
    if (base < 2 || base > 16)
        return NULL;
    if (n < 0 && base)
        n = (unsigned int)val;
    int tmp = n;
    if (!tmp)
        len++;
    while (tmp){
        len++;
        tmp /= base;
    }
    char *str = malloc(len + 1);
    if (!str)
        return NULL;
    str[len] = '\0';
    if (!n)
        str[0] = '0';
    if (n < 0)
        str[0] = '-';
    while(n){
        str[--len] = (n < 0) ? digits[-(n % base)] : digits[n % base];
        n /= base;
    }
    return str;
}
#include <stdio.h>
int main(){
    printf("%s\n", itoa_base(42, 16));
}
