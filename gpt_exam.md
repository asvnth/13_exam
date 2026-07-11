-lvl 0


--ex name: ft_print_alphabet

subject:
Write a function that displays the alphabet in lowercase in ascending order.

prototype:
void	ft_print_alphabet(void);

= solution:

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}


--ex name: ft_print_reverse_alphabet

subject:
Write a function that displays the alphabet in lowercase in descending order.

prototype:
void	ft_print_reverse_alphabet(void);

= solution:

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}


--ex name: ft_print_numbers

subject:
Write a function that displays all digits.

prototype:
void	ft_print_numbers(void);

= solution:

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}


--ex name: ft_print_comb

subject:
Write a function that displays all different combinations of three digits.

prototype:
void	ft_print_comb(void);

= solution:

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}


--ex name: ft_print_comb2

subject:
Write a function that displays all combinations of two two-digit numbers.

prototype:
void	ft_print_comb2(void);

= solution:

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	char	a;
	char	b;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			a = i / 10 + '0';
			write(1, &a, 1);
			a = i % 10 + '0';
			write(1, &a, 1);
			write(1, " ", 1);
			b = j / 10 + '0';
			write(1, &b, 1);
			b = j % 10 + '0';
			write(1, &b, 1);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}


--ex name: aff_first_param

subject:
Display the first argument passed to the program.

prototype:
int	main(int ac, char **av);

= solution:

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


--ex name: aff_last_param

subject:
Display the last argument passed to the program.

prototype:
int	main(int ac, char **av);

= solution:

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[ac - 1][i])
		{
			write(1, &av[ac - 1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


--ex name: ft_is_negative

subject:
Display N if the number is negative, P otherwise.

prototype:
void	ft_is_negative(int nb);

= solution:

#include <unistd.h>

void	ft_is_negative(int nb)
{
	if (nb < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}


--ex name: ft_boring_alphabet

subject:
Display the alphabet followed by a newline.

prototype:
void	ft_boring_alphabet(void);

= solution:

#include <unistd.h>

void	ft_boring_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	write(1, "\n", 1);
}

-lvl 1


--ex name: ft_strlen

subject:
Return the length of a string.

prototype:
int	ft_strlen(char *str);

= solution:

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


--ex name: ft_strcpy

subject:
Copy a string into another string.

prototype:
char	*ft_strcpy(char *dest, char *src);

= solution:

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


--ex name: ft_strcmp

subject:
Compare two strings.

prototype:
int	ft_strcmp(char *s1, char *s2);

= solution:

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


--ex name: ft_strdup

subject:
Duplicate a string using malloc.

prototype:
char	*ft_strdup(char *src);

= solution:

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}


--ex name: ft_str_is_alpha

subject:
Return 1 if the string contains only alphabetic characters.

prototype:
int	ft_str_is_alpha(char *str);

= solution:

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}


--ex name: ft_str_is_numeric

subject:
Return 1 if the string contains only digits.

prototype:
int	ft_str_is_numeric(char *str);

= solution:

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


--ex name: ft_str_is_lowercase

subject:
Return 1 if the string contains only lowercase letters.

prototype:
int	ft_str_is_lowercase(char *str);

= solution:

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}


--ex name: ft_str_is_uppercase

subject:
Return 1 if the string contains only uppercase letters.

prototype:
int	ft_str_is_uppercase(char *str);

= solution:

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}


--ex name: ft_str_is_printable

subject:
Return 1 if all characters are printable.

prototype:
int	ft_str_is_printable(char *str);

= solution:

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}


--ex name: ft_strupcase

subject:
Convert lowercase letters into uppercase.

prototype:
char	*ft_strupcase(char *str);

= solution:

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}


--ex name: ft_strlowcase

subject:
Convert uppercase letters into lowercase.

prototype:
char	*ft_strlowcase(char *str);

= solution:

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}


--ex name: ft_strcapitalize

subject:
Capitalize the first letter of each word and lowercase the rest.

prototype:
char	*ft_strcapitalize(char *str);

= solution:

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (start && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!start && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			start = 0;
		}
		else
			start = 1;
		i++;
	}
	return (str);
}

-lvl 2


--ex name: ft_iterative_factorial

subject:
Return the factorial of a number.
Negative numbers return 0.

prototype:
int	ft_iterative_factorial(int nb);

= solution:

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}


--ex name: ft_recursive_factorial

subject:
Return the factorial of a number using recursion.

prototype:
int	ft_recursive_factorial(int nb);

= solution:

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}


--ex name: ft_iterative_power

subject:
Return nb raised to the power power.

prototype:
int	ft_iterative_power(int nb, int power);

= solution:

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}


--ex name: ft_recursive_power

subject:
Return nb raised to the power power using recursion.

prototype:
int	ft_recursive_power(int nb, int power);

= solution:

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}


--ex name: ft_fibonacci

subject:
Return the Fibonacci value at index.
Negative indexes return -1.

prototype:
int	ft_fibonacci(int index);

= solution:

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}


--ex name: ft_sqrt

subject:
Return the square root of a perfect square.
Otherwise return 0.

prototype:
int	ft_sqrt(int nb);

= solution:

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i == nb / i && i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

--ex name: ft_is_prime

subject:
Return 1 if a number is prime, otherwise return 0.

prototype:
int	ft_is_prime(int nb);

= solution:

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

--ex name: ft_find_next_prime

subject:
Return the first prime number greater than or equal to nb.

prototype:
int	ft_find_next_prime(int nb);

= solution:

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

--ex name: Eight Queens

subject:
Display all possible solutions for the eight queens puzzle.

prototype:
void	ft_eight_queens(void);

= solution:

#include <unistd.h>

int	g_board[8];

int	ft_check(int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (g_board[i] == row)
			return (0);
		if (g_board[i] - i == row - col)
			return (0);
		if (g_board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(void)
{
	int	i;
	char	c;

	i = 0;
	while (i < 8)
	{
		c = g_board[i] + '1';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_solve(int col)
{
	int	row;

	if (col == 8)
	{
		ft_print_solution();
		return ;
	}
	row = 0;
	while (row < 8)
	{
		if (ft_check(col, row))
		{
			g_board[col] = row;
			ft_solve(col + 1);
		}
		row++;
	}
}

void	ft_eight_queens(void)
{
	ft_solve(0);
}


-lvl 3


--ex name: ft_atoi

subject:
Convert a string into an integer.

prototype:
int	ft_atoi(char *str);

= solution:

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

--ex name: ft_putstr_non_printable

subject:
Display a string and replace non printable characters with hexadecimal values.

prototype:
void	ft_putstr_non_printable(char *str);

= solution:

#include <unistd.h>

void	ft_put_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[(unsigned char)c / 16], 1);
	write(1, &hex[(unsigned char)c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_put_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}


--ex name: ft_ultimate_div_mod

subject:
Store division result in a and remainder in b.

prototype:
void	ft_ultimate_div_mod(int *a, int *b);

= solution:

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}


--ex name: ft_swap

subject:
Swap two integers.

prototype:
void	ft_swap(int *a, int *b);

= solution:

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


--ex name: sort_int_tab

subject:
Sort an integer array in ascending order.

prototype:
void	sort_int_tab(int *tab, unsigned int size);

= solution:

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}


--ex name: ft_rev_int_tab

subject:
Reverse an integer array.

prototype:
void	ft_rev_int_tab(int *tab, int size);

= solution:

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}


--ex name: ft_range

subject:
Create an array containing all integers between min and max.

prototype:
int	*ft_range(int min, int max);

= solution:

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}


--ex name: ft_atoi_base

subject:
Convert a number from a given base into an integer.

prototype:
int	ft_atoi_base(char *str, char *base);

= solution:

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_base_len(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		result;
	int		value;
	int		len;

	if (!ft_check_base(base))
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	len = ft_base_len(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
    while ((value = ft_value(str[i], base)) != -1)
    {
	    result = result * len + value;
	    i++;
    }
	return (result * sign);
}

--ex name: ft_convert_base

subject:
Convert a number from one base to another.

prototype:
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

= solution:

#include <stdlib.h>

int	ft_count_digits(long nb, char *base)
{
	int	len;
	int	count;

	len = ft_base_len(base);
	count = 0;
	if (nb <= 0)
		count = 1;
	if (nb < 0)
    {
	    count++;
	    nb = -nb;
    }
	while (nb)
	{
		count++;
		nb /= len;
	}
	return (count);
}

void	ft_put_base(long nb, char *base, char *res, int *i)
{
	int	len;

	len = ft_base_len(base);
	if (nb < 0)
	{
		res[(*i)++] = '-';
		nb = -nb;
	}
	if (nb >= len)
		ft_put_base(nb / len, base, res, i);
	res[(*i)++] = base[nb % len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	long	nb;
	int		i;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	res = malloc(sizeof(char) * (ft_count_digits(nb, base_to) + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (nb == 0)
		res[i++] = base_to[0];
	else
		ft_put_base(nb, base_to, res, &i);
	res[i] = '\0';
	return (res);
}

-lvl 4


--ex name: sort_list

subject:
Sort a singly linked list.

prototype:

t_list	*sort_list(t_list *lst, int (*cmp)(void *, void *));

= solution:

t_list	*sort_list(t_list *lst, int (*cmp)(void *, void *))
{
	t_list	*current;
	void	*tmp;

	current = lst;
	while (current)
	{
		if (current->next && cmp(current->data, current->next->data) > 0)
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = lst;
		}
		else
			current = current->next;
	}
	return (lst);
}


--ex name: ft_strjoin

subject:
Join strings using a separator.

prototype:

char	*ft_strjoin(int size, char **strs, char *sep);

= solution:

#include <stdlib.h>

static int	ft_strlen_join(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;
	int		i;
	int		j;
	int		k;

	if (size == 0)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j])
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}
