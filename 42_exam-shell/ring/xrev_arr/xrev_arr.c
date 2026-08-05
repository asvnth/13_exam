#include <unistd.h>
#include <stdlib.h>
void putnbr(int n){
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0){
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}
int main(int ac, char **av){
	if (ac < 3){
		write(1, "\n", 1);
		return (0);
	}
	int *a = malloc(sizeof(int) * ac - 1);
	int i = 0;
	while (i < ac - 1){
		a[i] = atoi(av[i + 1]);
		i++;
	}
	int x = ac - 2, y = 0, tmp;
	while (y < x){
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x--, y++;
	}
	i = 0;
	while (i < ac - 1){
		putnbr(a[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	free(a);
}
