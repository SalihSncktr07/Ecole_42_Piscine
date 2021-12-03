/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcicek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:30:13 by fcicek            #+#    #+#             */
/*   Updated: 2021/12/01 11:16:49 by fcicek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	putarr(int tab[], int size)
{
	int	i;

	i = 0;
	while (i <= size - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[] = {10, 7, 8, 9, 1, 5};
	int	size;

	size = 6;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}
