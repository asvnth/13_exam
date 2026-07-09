#include <unistd.h>

int main(int ac, char **av){
    if (ac != 3){
        write(1, "\n", 1);
        return (0);
    }
    int seen[256] = {0};
    char *s = av[1];
    while (*s){
        if (!seen[*s]){
            write(1, s, 1);
            seen[*s] = 1;
        }
        s++;
    }
    s = av[2];
    while (*s){
        if (!seen[*s]){
            write(1, s, 1);
            seen[*s] = 1;
        }
        s++;
    }
    write(1, "\n", 1);
    return(0);
}
