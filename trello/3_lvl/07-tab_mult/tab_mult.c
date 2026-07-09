#include <unistd.h>

int ft_atoi(char *s)
{
    int n = 0;

    while (*s >= '0' && *s <= '9')
        n = n * 10 + (*s++ - '0');
    return (n);
}

void ft_putnbr(int n)
{
    char c;

    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2 && ft_atoi(av[1]) > 0)
    {
        int i = 1;
        int n = ft_atoi(av[1]);

        while (i < 10)
        {
            ft_putnbr(i);
            write(1, " * ", 3);
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
