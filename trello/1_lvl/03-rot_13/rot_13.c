#include <unistd.h>

int main(int argc, char **argv){
    if (argc != 2){
        write(1, "\n", 1);
        return(0);
    }
    char *s = argv[1];
    while (*s) {
        char c = *s;
        if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M')){
            c += 13;
        }
        else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z')){
            c -= 13;
        }
        write(1, &c, 1);
        s++;
    }
    write(1, "\n", 1);
    return(0);
}
