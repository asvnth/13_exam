#include <unistd.h>

int main(int ac, char **av){
    if (ac != 3){
        write(1, "\n", 1);
        return (0);
    }
    char *s1 = av[1];
    char *s2 = av[2];
    char *start = s1;
    while(*s1 && *s2){
        if (*s1 == *s2)
            s1++;
        s2++;
    }
    if (!*s1)
        write(1, start, s1 - start);
    write(1, "\n", 1);
    return (0);
}
