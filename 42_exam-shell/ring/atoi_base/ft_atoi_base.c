/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 22:17:30 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/07/22 17:51:24 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_base(char *str, char *base)
{
	int		blen;
	int		sign;
	long	res;
	char	*p;

	blen = 0;
	while (base[blen])
		blen++;
	while (*str == ' ')
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	res = 0;
	while (*str)
	{
		p = base;
		while (*p && *p != *str)
			p++;
		if (!*p)
			break ;
		res = res * blen + (p - base);
		str++;
	}
	return (res * sign);
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
