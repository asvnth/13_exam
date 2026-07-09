#include <unistd.h>

int ft_atoi(char *s){
    int n = 0;
    int sign = 1;
    if (*s == '-'){
        sign = -1;
        s++;
    }
    while(*s >= '0' && *s <= '9')
        n = n * 10 + (*s++ - '0');
    return(n * sign);
}

void ft_putnbr(int n){
    char c;
    if (n == -2147483648){
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0){
        write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n/10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av){
    if (ac == 2){
        int i = 1;
        int n = ft_atoi(av[1]);
        while (i < 10){
            ft_putnbr(i);
            write (1, " * ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(n * i);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
