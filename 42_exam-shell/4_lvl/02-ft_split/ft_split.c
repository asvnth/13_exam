#include <stdlib.h>

static int count_words(char *str)
{
    int i = 0;
    int k = 0;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
            k++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    return (k);
}

char **ft_split(char *str)
{
    char **r;
    int i, j, k, len;

    r = malloc(sizeof(char *) * (count_words(str) + 1));
    r = malloc(sizeof(char *) * (count_words(str) + 1));
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
        j = 0;
        while (j < len)
            r[k][j++] = str[i++];
        r[k][j++] = '\0';
        k++;
    }
    r[k] = NULL;
    return (r);
}

#include <stdio.h>
int main(){
    char **r = ft_split("       gg         w           stream       ");
    int i = 0;
    printf("[");
    while (r[i]){
        printf("\"%s\", ", r[i]);
        free(r[i]);
        i++;
    }
    printf("\b\b]");
    free(r);
    printf("\n");
}
