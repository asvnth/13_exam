char *itoa(int n, char *s){
    int i = 0, sign = n;
    if (sign < 0) n = -n;
    do { s[i++] = n % 10 + '0'; } while ((n /= 10) > 0);
    if (sign < 0) s[i++] = '-';
    s[i] = '\0';
    // reverse
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char tmp = s[j]; s[j] = s[k]; s[k] = tmp;
    }
    return s;
}
