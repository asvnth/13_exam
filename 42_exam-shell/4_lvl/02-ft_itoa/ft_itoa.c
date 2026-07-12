#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	n;
	long	tmp;
	int		len;
	char	*str;

	n = nbr;
	len = (n < 0) ? 1 : 0;
	tmp = n < 0 ? -n : n;
	do
	{
		len++;
		tmp /= 10;
	} while (tmp != 0);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (nbr == 0)
		str[0] = '0';
	return (str);
}

#include <stdio.h>

char	*ft_itoa(int nbr);

int	main(void)
{
	int	tests[] = {0, 1, -1, 9, -9, 10, -10, 42, -42,
		100, -100, 2147483647, -2147483648};
	int	i;

	i = 0;
	while (i < 13)
	{
		printf("%d -> %s\n", tests[i], ft_itoa(tests[i]));
		i++;
	}
	return (0);
}
