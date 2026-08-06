#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                write(1, &"ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(av[1][i] - 'A' + av[1][j % 3] - 'A') % 26], 1);
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                write(1, &"abcdefghijklmnopqrstuvwxyz"[(av[1][i] - 'a' + av[1][j % 3] - 'a') % 26], 1);
            else
                write(1, &av[1][i], 1);
            i++;
            j++;
        }
    }
    write(1, "\n", 1);
}
