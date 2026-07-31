char *itoa(int n, char *s){
    int i = 0, sign = n;
    if (sign < 0) n = -n;
    while (1) {
        s[i++] = n % 10 + '0';
        n /= 10;
        if (n == 0) break;
    }
    if (sign < 0) s[i++] = '-';
    s[i] = '\0';
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char tmp = s[j]; s[j] = s[k]; s[k] = tmp;
    }
    return s;
}
