int ft_strcspn(char *s, char *accept)
{
    char *start = s;
    char *a;

    while (*s)
    {
        a = accept;
        while (*a)
        {
            if (*s == *a)
                return (s - start);
            a++;
        }
        s++;
    }
    return (s - start);
}
