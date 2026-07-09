#include <unistd.h>

int ft_atoi(char *s){
    int f = 0;
    int sign = 1;
    if (*s == '-'){
        sign = -1;
        s++;
    }
    while(*s >= '0' && *s <= '9'){
        f = f * 10 + (*s++ - '0');
    }
    return(f * sign);
}

void ft_putnbr(int n){
    if(n > 9)
        ft_putnbr(n/10);
    n = (n % 10) + '0';
    write(1, &n, 1);
}

int main(int ac, char **av){
    if (ac == 2){
        int i = 1;
        int n = ft_atoi(av[1]);
        while (i < 10){
            int res = n * i;
            ft_putnbr(i);
            write (1, " * ", 3);
            ft_putnbr(ft_atoi(av[1]));
            write(1, " = ", 3);
            ft_putnbr(res);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
