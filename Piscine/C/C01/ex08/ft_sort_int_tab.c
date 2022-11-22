/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:58:40 by spirnaz           #+#    #+#             */
/*   Updated: 2021/12/04 23:59:19 by spirnaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	quicksort(int arr[], int l, int r)
{
	int	piv;
	int	split;
	int	i;

	if (l >= r)
		return ;
	piv = arr[r];
	split = l;
	i = l;
	while (i <= r)
	{
		if (arr[i] <= piv)
		{
			ft_swap(&arr[split], &arr[i]);
			split++;
		}
		i++;
	}
	quicksort(arr, l, split - 2);
	quicksort(arr, split, r);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	r;

	l = 0;
	r = size - 1;
	quicksort(tab, l, r);
}
