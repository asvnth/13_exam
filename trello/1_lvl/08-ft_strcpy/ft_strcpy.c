char    *ft_strcpy(char *str1, char *str2){
    char *start = str1;
    while(*str2){
        *start++ = *str2++;
    }
    *start = '\0';//-str1 → fixed reference (return value) -start → working pointer (moves)
    return(str1);
}
