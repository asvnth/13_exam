#include <unistd.h>

void capitalizer(char *s){
    int i = 0;
    while (s[i]){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t') 
                && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 32;
        i++;
    }
    write(1, s, i);
    write(1, "\n", 1);
}

int main(int ac, char **av){
    if (1 < ac){
        int i = 1;
        while(i < ac){
            capitalizer(av[i]);
            i++;
        }
    }
    else 
        write (1, "\n", 1);
    return (0);
}
