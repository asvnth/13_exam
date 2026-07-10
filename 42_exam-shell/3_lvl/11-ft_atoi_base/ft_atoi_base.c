int ft_isblank(char c){
    while (c <= 32)
        return(1);
    return(0);
}

int isvalid(const char c, int base){
    char lowerbase[] = "0123456789abcdef";
    char uperbase[] = "0123456789ABCDEF";
    while(base--){
        if (c == lowerbase[base] || c == uperbase[base])
            return (1);
    }
    return (0);
}

int value_of(char c){
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int ft_atoi_base(const char *str, int str_base){
    int result = 0;
    int sign = 1;
    while (ft_isblank(*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (isvalid(*str, str_base))
        result = result * str_base + value_of(*str++);
    return (result * sign);
}

#include <stdio.h>
int main(){
    int x = ft_atoi_base("1fe4", 16);
    printf("%d\n", x);
    int y = ft_atoi_base("-1FE4", 16);
    printf("%d\n", y);
    return (0);
}
