ahmelamr@e1r2p15 ~/D/e/exam-shell (master)> ls
atoibase.c  hidenp.c  mirror.c  ptnbr_base.c  strplndrm.c  strstr.c  Tribonacci.c  wdmatch.c
ahmelamr@e1r2p15 ~/D/e/exam-shell (master)> cat ./*
int	valid_base(char *b)
{
	int	i;
	int	j;

	i = 0;
	while (b[i])
	{
		if (b[i] == '+' || b[i] == '-' || b[i] <= 32)
			return (0);
		j = i + 1;
		while (b[j])
			if (b[i] == b[j++])
				return (0);
		i++;
	}
	return (i > 1);
}

int	ft_atoi_base(const char *str, char *base){
	if (!valid_base(base))
		return 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	int sign = 1;
	if (*str == '+' || *str == '-'){
		if (*str == '-')
			sign = -1;
		str++;
	}
	int blen = 0;
	while (base[blen])
		blen++;
	int res = 0;
	char *p;
	while (*str){
		p = base;
		while (*p && *p != *str)
			p++;
		if (!*p)
			break;
		res = res * blen + (p - base);
		str++;
	}
	return res * sign;
}
#include <stdio.h>
int main(void)
{
	printf("\"42\" base 10 -> %d\n", ft_atoi_base("42", "0123456789"));
	printf("\"-2A\" base 16 -> %d\n", ft_atoi_base("-2A", "0123456789ABCDEF"));
	printf("\"101\" base 2 -> %d\n", ft_atoi_base("101", "01"));
	printf("\"  +123\" base 10 -> %d\n", ft_atoi_base("  +123", "0123456789"));
	printf("\"777\" base 8 -> %d\n", ft_atoi_base("777", "01234567"));
	return (0);
}
int ft_strcmp(char *s1, char *s2){
	while (*s1 && *s2 && *s1 == *s2)
		s1++, s2++;
	return (*s1 - *s2);
}
int	mirror(char *str){
	int size = 0;
	while (str[size])
		size++;
	int i = 0, j = size - 1;
	while (i < size / 2){
		if (str[i] != str[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}
int valid(char *base){
	int i = 0, j;
	while (base[i]){
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return 0;
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return 0;
		i++;
	}
	return (i > 1);
}
#include <unistd.h>
void pntbrbase(int n, char *base){
	long nb = n;
	if (!valid(base))
		return;
	if (nb < 0){
		write (1, "-", 1);
		nb = -nb;
	}
	long blen = 0;
	while (base[blen])
		blen++;
	if (nb >= blen)
		pntbrbase(nb / blen, base);
	write(1, &base[nb % blen], 1);
}
#include <unistd.h>
int main(void)
{
	pntbrbase(42, "0123456789");
	write(1, "\n", 1);

	pntbrbase(42, "01");
	write(1, "\n", 1);

	pntbrbase(-42, "0123456789ABCDEF");
	write(1, "\n", 1);

	pntbrbase(-2147483648, "0123456789");
	write(1, "\n", 1);

	return (0);
}
int ft_str_is_palindrome(char *s){
	int i = 0, j, size = 0;
	while (s[size])
		size++;
	j = size - 1;
	while (i < j){
		while (i < j && (!((s[i] >= '0' && s[i] <= '9')
		|| (s[i] >= 'a' && s[i] <= 'z')
		|| (s[i] >= 'A' && s[i] <= 'Z'))))
			i++;
		while (i < j && (!((s[j] >= '0' && s[j] <= '9')
			|| (s[j] >= 'a' && s[j] <= 'z')
			|| (s[j] >= 'A' && s[j] <= 'Z'))))
			j--;
		if (s[i] != s[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}
char *ft_strstr(char *s, char *f){
	char *a, *b;
	while (*s){
		a = s, b = f;
		while (*a && *b && *a == *b)
			a++, b++;
		if (!b)
			return s;
		s++;
	}
	return 0;
}
int	trinacci(int n){
	if (n < 0)
		return -1;
	if (!n)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	return (trinacci(n - 3) + trinacci(n - 2) + trinacci(n - 1));
}
#include <unistd.h>
int main(int ac, char **av){
	int i, j;
	if (ac == 3){
		i = 0, j = 0;
		while (av[2][i]){
			if (av[2][i] == av[1][j])
				j++;
			i++;
		}
		if (!(av[1][j])){
			i = 0;
			while (av[1][i])
				write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
ahmelamr@e1r2p15 ~/D/e/exam-shell (master)> 

