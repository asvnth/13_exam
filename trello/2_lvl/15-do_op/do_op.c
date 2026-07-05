#include <unistd.h>

int ft_atoi(char *s){
    int sign = 1;
    int r = 0;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-' || *s == '+')
        if (*s++ == '-')
            sign = -1;
    while (*s >= '0' && *s <= '9')
        r = r * 10 + (*s++ - '0');
    return (r * sign);
}

void ft_putnbr(int n){
    char c;
    if (n < 0){
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n/10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av){
    if (ac != 4){
        write(1, "\n", 1);
        return (0);
    }
    int a, b, r;
    a = ft_atoi(av[1]);
    b = ft_atoi(av[3]);
    if (av[2][0] == '+') r = a + b;
    else if (av[2][0] == '-') r = a - b;
    else if (av[2][0] == '/'){
        if (b == 0)
            return (write(1, "\n", 1), 0);
        r = a / b;
    }
    else if (av[2][0] == '*') r = a * b;
    else return (write(1, "\n", 1), 0);
    ft_putnbr(r);
    write(1, "\n", 1);
}
