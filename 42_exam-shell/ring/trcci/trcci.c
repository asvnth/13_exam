int tribonacci(int n) {
    if (n <= 0 || n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 0, c = 1, i = 3, next;

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
