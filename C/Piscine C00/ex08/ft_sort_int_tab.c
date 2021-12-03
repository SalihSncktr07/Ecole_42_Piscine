/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcicek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:30:18 by fcicek            #+#    #+#             */
/*   Updated: 2021/12/01 11:13:45 by fcicek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
