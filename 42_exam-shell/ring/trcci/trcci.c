int tribonacci(int n) {
    if (n < 0) return 0;
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int a = 0, b = 1, c = 1, i = 3, next;

    while (i <= n) {
        next = a + b + c;
        a = b;
        b = c;
        c = next;
        i++;
    }
    return c;
}
#include <stdio.h>
int main(){
  printf("10 -> %d\n",tribonacci(10));
}
