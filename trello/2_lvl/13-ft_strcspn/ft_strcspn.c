int ft_strcspn(char *s, char *accept){
    int i = 0;
    int j;
    while (s[i]){
        j = 0;
        while (accept[j]){
            if (s[i] == accept[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
