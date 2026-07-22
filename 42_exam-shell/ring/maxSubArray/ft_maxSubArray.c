/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxSubArray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 00:18:58 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/07/23 00:20:05 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	maxSubArray(int a[], int n) {
	int max = a[0], cur = a[0], i = 1;
	while (i < n){
		cur = (cur + a[i] > a[i]) ? cur + a[i] : a[i];
		if (cur > max)
			max = cur;
		i++;
	}
	return max;
}

int main() {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d\n", maxSubArray(a, n)); // 6
    return 0;
}
