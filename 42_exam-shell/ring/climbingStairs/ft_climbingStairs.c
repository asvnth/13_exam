/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_climbingStairs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:32:30 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/07/23 00:15:09 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	climbingStairs(int n){
	if (n <= 1)
		return 1;

	long long prev2 = 1; // ways(0)
	long long prev1 = 1; // ways(1)
	long long curr  = 0;
	int	i = 2;
	while (i <= n) {
		curr  = prev1 + prev2;
		prev2 = prev1;
		prev1 = curr;
		i++;
	}

	return curr;
}

#include <stdio.h>
int main() {
    int n = 10;
    printf("Ways to climb %d stairs: %lld\n", n, climbingStairs(n));
    return 0;
}
