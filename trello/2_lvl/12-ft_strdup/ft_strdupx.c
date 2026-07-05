#include <stdlib.h>

char *ft_strdup(char *s){
    int i = 0;
    int j = 0;
    char *memory;
    while (s[i])
        i++;
    memory = malloc(i + 1);
    if (!memory)
        return (0);
    while (s[j])
    {
        memory[j] = s[j];
        j++;
    }
    memory[j] = '\0';
    return memory;
}
