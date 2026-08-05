#include <unistd.h>
#include <stdlib.h>
void	ft_putnbr(int n){
	char c;
	if (n == -2147483648){
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0){
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
int	main(int ac, char **av){
	if (ac < 3)
		return (1);
	int n = ac - 2;
	int k = atoi(av[1]) % n;
	int *a = malloc(sizeof(int) * n);
	int *t = malloc(sizeof(int) * n);
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
		a[i] = atoi(av[i + 2]);
	int start = n - k;
	for (i = start; i < n; i++)
		t[j++] = a[i];
	for (i = 0; i < start; i++)
		t[j++] = a[i];
	for (i = 0; i < n; i++){
		ft_putnbr(t[i]);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
	free(a);
	free(t);
	return (0);
}
