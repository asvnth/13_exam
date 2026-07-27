char *str_join(const char *a, const char *b) {
    char *r = malloc(strlen(a) + strlen(b) + 1);
    return r ? strcat(strcpy(r, a), b) : NULL;
}
