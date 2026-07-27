char *convert_base(const char *s, int from, int to) {
    long n = strtol(s, NULL, from);
    char tmp[65];
    char *p = tmp + 64;
    *p = '\0';
    int neg = n < 0;
    if (neg) n = -n;
    do {
        *--p = "0123456789abcdefghijklmnopqrstuvwxyz"[n % to];
        n /= to;
    } while (n);
    if (neg) *--p = '-';

    char *r = malloc(strlen(p) + 1);
    if (r) strcpy(r, p);
    return r;
}
