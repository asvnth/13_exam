#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    const char *start = s;
    const char *a;
    while (*s)
    {
        a = accept;
        while (*a && *a != *s)
            a++;
        if (!*a)
            return (s - start);
        s++;
    }
    return (s - start);
}
