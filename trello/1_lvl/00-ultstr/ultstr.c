#include <unistd.h>

int main(int argc, char **argv){
    if (argc != 2){
        write(1, "\n", 1);
        return(0);
    }
    char *s = argv[1];
    while(*s){
        char c = *s;
        if(c >= 'A' && c <= 'Z')
            c += 32;
        else if(c >= 'a' && c <= 'z')
            c -= 32;
        write(1, &c, 1);
        s++;
    }
    write(1, "\n", 1);
    return (0);
}
