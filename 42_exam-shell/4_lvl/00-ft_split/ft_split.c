#include <stdlib.h>

char **ft_split(char *str)
{
    char **r;
    int i, j, k, len;

    k = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
            k++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    r = malloc(sizeof(char *) * (k + 1));
    if (!r)
        return (NULL);
    i = 0;
    k = 0;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (!str[i])
            break;
        len = 0;
        while (str[i + len] && str[i + len] != ' ' &&
                str[i + len] != '\t' && str[i + len] != '\n')
            len++;
        r[k] = malloc(len + 1);
        if (!r[k])
            return (NULL);
        j = 0;
        while (j < len)
            r[k][j++] = str[i++];
        r[k][j] = '\0';
        k++;
    }
    r[k] = NULL;
    return (r);
}

#include <stdio.h>

int main(void)
{
    char **r = ft_split("gg w stream foo");
    int i = 0;
    printf("[");
    while (r[i])
        printf("%s, ", r[i++]);
    printf("\b\b]\n");
    return (0);
}


