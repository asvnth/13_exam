#include <unistd.h>

int main(int ac, char **av){
    if (ac > 1){
        int start, i = 1, j;
        while(i < ac){
            j = 0;
            start = 1;
            while (av[i][j]){
                if (av[i][j] == ' ' || av[i][j] == '\t')
                    start = 1;
                else {
                    if (start 
                            && (av[i][j] >= 'a' && av[i][j] <= 'z'))
                            av[i][j] -= 32;
                    else if (!start 
                            && (av[i][j] >= 'A' && av[i][j] <= 'Z'))
                        av[i][j] += 32;
                    start = 0;
                }
                write(1, &av[i][j], 1);
                j++;
            }
            i++;
            if (i < ac)
            write (1, "\n", 1);
        }
    }
    write (1, "\n", 1);
    return (0);
}
