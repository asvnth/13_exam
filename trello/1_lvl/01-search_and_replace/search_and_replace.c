#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc != 4 || argv[2][1] || argv[3][1]){
        write(1, "\n", 1);
        exit(0);
    }
    char *s = argv[1];
    while(*s){
        if (*s == argv[2][0])
            write(1, &argv[3][0], 1);
        else
            write(1, s, 1);
        s++;
    }
    write(1, "\n", 1);
}
