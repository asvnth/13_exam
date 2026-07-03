#include <unistd.h>

int main(int ac, char **av){
    char c;
    int count;
    int i = 0;
    if (ac != 2){
        write(1, "\n", 1);
        return(0);
    }
    
    while(av[1][i]){
        c = av[1][i];
        if (c >= 'a' && c <= 'z')
            count = c - 'a' + 1;
        else if(c >= 'A' && c <= 'Z')
            count = c - 'A' + 1;
        else
            count = 1;
        while(count--){
            write(1, &c, 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}
