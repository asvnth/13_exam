#include <stdio.h>
#include <stdlib.h>

void rotate(int *a, int n, int k)
{
	int *t = malloc(sizeof(int) * n);
	k = ((k % n) + n) % n;
	for (int i = 0; i < n; i++)
		t[i] = a[(i + k) % n];
	for (int i = 0; i < n; i++)
		a[i] = t[i];
	free(t);
}

int main(int argc, char **argv)
{
	if (argc < 3) return 1;
	int k = atoi(argv[1]);
	int n = argc - 2;
	int *a = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		a[i] = atoi(argv[i + 2]);
	rotate(a, n, k);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	free(a);
	return 0;
}
