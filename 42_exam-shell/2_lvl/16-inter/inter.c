#include <unistd.h>

int main(int ac, char **av){
    if (ac != 3){
        write(1, "\n", 1);
        return (0);
    }
    int seen[256] = {0};
    char *s1 = av[1];
    while (*s1){
        char *s2 = av[2];
        if (!seen[(unsigned char)*s1]){
            while (*s2 && *s1 != *s2)
                s2++;
            if(*s2)
                write(1, s1, 1);
        }
        seen[(unsigned char)*s1] = 1;
        s1++;
    }
    write(1, "\n", 1);
    return (0);
}
