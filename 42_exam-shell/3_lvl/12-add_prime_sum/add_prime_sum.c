#include <unistd.h>

void   ft_putchar(char c){
        write(1, &c, 1);
}

void   ft_put_posnbr(int n){
    if (n > 9)
        ft_put_posnbr(n / 10);
    ft_putchar(n % 10 + '0');
}
int    ft_atoi_pos(char *s){
    int i = 0;
    while (*s >= '0' && *s <= '9')
        i = i * 10 + *s++ - '0';
    return (i);
}

int is_prime(int n){
    int i = 2;
    if (n < 2)
        return (0);
    while (i < n)
        if (!(n % i++))
            return (0);
    return (1);
}

void prime_sum(int n){
    int i = 1;
    int sum = 0;
    if (n == 1)
        sum = 1;
    while (++i <= n) 
        if (is_prime(i))
            sum += i;
    ft_put_posnbr(sum);
}

int main(int ac, char **av){
    if (ac == 2 && ft_atoi_pos(av[1]))
        prime_sum(ft_atoi_pos(av[1]));
    else 
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}
