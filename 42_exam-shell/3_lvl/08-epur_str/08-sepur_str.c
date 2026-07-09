#include <unistd.h>

int is_word_char(char c)
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z') || c == '\'');
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int started = 0;   // have we printed any word char yet?
        int need_space = 0; // are we between two words?

        while (av[1][i])
        {
            if (is_word_char(av[1][i]))
            {
                if (need_space)
                {
                    write(1, " ", 1);
                    need_space = 0;
                }
                write(1, &av[1][i], 1);
                started = 1;
            }
            else if (started)
                need_space = 1; // saw a gap after a word started
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
