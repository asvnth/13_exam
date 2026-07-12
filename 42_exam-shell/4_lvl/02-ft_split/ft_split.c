#include <stdlib.h>

char **ft_split(char *str){
    char **r;
    int i = 0;
    if (!(r = (char **)malloc(sizeof(char *) * (2048))))
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    int j = 0;
    int k = 0;
    while (str[i]){
        j = 0;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            r[k][j++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        r[k][j] = '\0';
        k++;
    }
    r[k] = NULL;
    return (r);
}

#include <stdio.h>
int main(){
    char **s = ft_split("hksd kjfdsf");
    int i = 0;
    while (s[i])
        printf ("%s\n", s[i++]);
    return (0);
}
