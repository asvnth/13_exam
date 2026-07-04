#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;
    while (s[i])
    {
        j = 0;
        while (accept[j] && accept[j] != s[i])
            j++;
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}
