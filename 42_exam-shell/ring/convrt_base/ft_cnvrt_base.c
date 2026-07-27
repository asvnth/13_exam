char *ft_convert_base(char *nbr, char *base_from, char *base_to) {
    int from = strlen(base_from), to = strlen(base_to);
    long n = 0;
    int neg = (*nbr == '-');
    if (neg) nbr++;
    for (; *nbr; nbr++)
        n = n * from + (strchr(base_from, *nbr) - base_from);

    char tmp[65];
    char *p = tmp + 64;
    *p = '\0';
    long v = neg ? -n : n;
    if (v < 0) v = -v;
    do {
        *--p = base_to[v % to];
        v /= to;
    } while (v);
    if (neg) *--p = '-';

    char *r = malloc(strlen(p) + 1);
    if (r) strcpy(r, p);
    return r;
}
