#include <unistd.h>

int main(int ac, char **av){
    if (ac != 3){
        write(1, "\n", 1);
        return (0);
    }
    int i = 0;
    int equal = 1;
    while (av[1][i] && av[2][i]){
        if (av[1][i] != av[2][i])
            equal = 0;
        i++;
    }
    if (equal)
        write(1, "1\n", 2);
    else 
        write(1, "0\n", 2);
    return (0);
}
