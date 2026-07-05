char *ft_strrev(char *str){
    char *start = str;
    char *end = str;
    char tmp;

    while(*end)
        end++;
    end--;
    while(start < end){
        tmp = *start;
        *start++ = *end;
        *end-- = tmp;
    }
    return (str);
}
