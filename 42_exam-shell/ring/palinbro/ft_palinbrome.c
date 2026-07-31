/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palinbro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 15:46:05 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/07/22 16:37:06 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_palinbro(int n)
{
	int reversed = 0, nmbr = n;
	if (nmbr < 0)
	{
		write(1, "0", 1);
		return;
	}
	while (nmbr > 0)
	{
		reversed = reversed * 10 + nmbr % 10;
		nmbr /= 10;
	}
	if (n == reversed)
		write(1, "1", 1);
	else
		write (1, "0", 1);
}

int main()
{
	write (1, "12321 is : ", 10);
	ft_palinbro(12321);
	write (1, "\n10 is : ", 9);
	ft_palinbro(10);
	write (1, "\n0 is : ", 8);
	ft_palinbro(0);
	write (1, "\n12345 is : ", 11);
	ft_palinbro(12345);
	write(1, "\n-121 is : ", 10);
	ft_palinbro(-121);
	write(1, "\n7 is : ", 7);
	ft_palinbro(7);
}
