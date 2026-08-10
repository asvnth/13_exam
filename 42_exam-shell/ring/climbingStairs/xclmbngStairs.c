int clim(int n){
	long t, a = 1, b = 1;
	while (n--){
		t = a;
		a = b;
		b += t;
	}
	return a;
}
#include <stdio.h>
int main() {
    int n = 10;
    printf("ways to climb %d stairs: %d\n", n, clim(n));
    return 0;
}
