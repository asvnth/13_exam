int ft_atoi(char *s){
    int r = 0;
    int sign = 1;
    while ((*s == ' ') || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-' || *s == '+')
        if (*s++ == '-')
            sign = -1;
    while (*s >= '0' && *s <= '9')
        r = r * 10 + (*s++ - '0');
    return (r * sign);
}
