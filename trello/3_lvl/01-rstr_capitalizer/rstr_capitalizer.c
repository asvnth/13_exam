#include <unistd.h>

int main(int ac, char **av)
{
    int a, i, new_word;
    char c;

    if (ac == 1)
        write(1, "\n", 1);
    a = 1;
    while (a < ac)
    {
        new_word = 1;
        i = 0;
        while (av[a][i])
        {
            c = av[a][i];
            if (c == ' ' || c == '\t')
                new_word = 1;
            else
            {
                if (new_word && c >= 'a' && c <= 'z')
                    c -= 32;
                else if (!new_word && c >= 'A' && c <= 'Z')
                    c += 32;
                new_word = 0;
            }
            write(1, &c, 1);
            i++;
        }
        write(1, "\n", 1);
        a++;
    }
    return (0);
}
