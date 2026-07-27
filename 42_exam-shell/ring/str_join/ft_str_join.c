char *ft_strjoin(int size, char **strs, char *sep) {
    int sep_len = strlen(sep), total = 0;
    for (int i = 0; i < size; i++)
        total += strlen(strs[i]) + (i < size - 1 ? sep_len : 0);

    char *r = malloc(total + 1);
    if (!r) return NULL;

    r[0] = '\0';
    for (int i = 0; i < size; i++) {
        strcat(r, strs[i]);
        if (i < size - 1) strcat(r, sep);
    }
    return r;
}
