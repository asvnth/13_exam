int fibonacci(int n){
    int t, a = 0, b = 1;
    while (n--){
        t = a;
        a = b;
        b += t;
    }
    return a;
}
#include <stdio.h>
int main(){
    printf("%d\n", fibonacci(10));
}
