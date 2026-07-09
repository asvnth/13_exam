#include <stdio.h>
#include <stdlib.h>

int pgcd(unsigned int n1, unsigned int n2){
    unsigned i = n1 + 1;
    while (i--)
        if (!(n1 % i) && !(n2 % i))
            return (i);
    return (1);
}

int main(int ac, char **av){
    if (ac == 3){
        printf("%i", pgcd(atoi(av[1]), atoi(av[2])));
    }
    printf("\n");
    return (0);
}
