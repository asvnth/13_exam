#include <unistd.h>

int ft_atoi(char *s){
    int result = 0;
    int sign  = 1;
    while (*s == ' ')
        s++;
    if (*s == '-'){
        sign  = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9'){
        result = result * 10 + (*s - '0');
        s++;
    }
    return (result * sign);
}

void print_hex(int n){
    if (n >= 16)
        print_hex(n / 16);
    n %= 16;
    if (n < 10)
        n += '0';
    else
        n += ('a' - 10);
    write(1, &n, 1);
}

int    main(int ac, char **av){
    if (ac == 2){
        print_hex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
    return (0);
}
