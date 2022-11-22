/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:03:52 by spirnaz           #+#    #+#             */
/*   Updated: 2022/10/24 23:09:39 by spirnaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int main(void)
{
    printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
    printf("%d -> %d\n", 0, ft_find_next_prime(0));
    printf("%d -> %d\n", 1, ft_find_next_prime(1));
    printf("%d -> %d\n", 2, ft_find_next_prime(2));
}
*/
