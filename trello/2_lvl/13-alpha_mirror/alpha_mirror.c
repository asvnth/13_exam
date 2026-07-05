#include <iso646.h>
#include <unistd.h>

int main(int ac, char **av){
    if (ac != 2){
        write(1, "\n", 1);
        return (0);
    }
    int i = 0;
    char c;
    while (av[1][i]){
        c = av[1][i];
        if (c >= 'a' && c <= 'z')
            c = 'z' - (c - 'a');
        else if (c >= 'A' && c <= 'Z'){
            c = 'Z' - (c - 'A');
        write(1, &c, 1);
        i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
