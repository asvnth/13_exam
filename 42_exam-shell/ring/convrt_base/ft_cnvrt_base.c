char **ft_split(char *str, char *charset) {
    int is_delim(char c) { return strchr(charset, c) != NULL; }

    int count = 0, in_word = 0;
    for (char *p = str; *p; p++) {
        if (!is_delim(*p) && !in_word) { count++; in_word = 1; }
        else if (is_delim(*p)) in_word = 0;
    }

    char **out = malloc((count + 1) * sizeof(char *));
    if (!out) return NULL;

    int idx = 0;
    char *p = str;
    while (*p) {
        while (*p && is_delim(*p)) p++;
        if (!*p) break;
        char *start = p;
        while (*p && !is_delim(*p)) p++;
        int len = p - start;
        out[idx] = malloc(len + 1);
        memcpy(out[idx], start, len);
        out[idx][len] = '\0';
        idx++;
    }
    out[count] = NULL;
    return out;
}
