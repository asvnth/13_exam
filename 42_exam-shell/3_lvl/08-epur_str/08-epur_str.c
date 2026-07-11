#include <unistd.h>

int is_word_char(char c){
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c == '\''));
}

int main(int ac, char **av){
    if (ac == 2){
        int i = 0;
        int started = 0;
        while (av[1][i]){
            if (started && (av[1][i] == ' ' || av[1][i] == '\t')
                    && is_word_char(av[1][i+1]))
                write(1, &av[1][i], 1);
            else if (is_word_char(av[1][i])){
                write(1, &av[1][i], 1);
                started = 1;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
