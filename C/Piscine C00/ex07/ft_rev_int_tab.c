/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcicek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:29:46 by fcicek            #+#    #+#             */
/*   Updated: 2021/12/01 15:55:34 by fcicek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	s;
	int	d;

	d = size - 1;
	s = 0;
	while (s < size / 2)
	{
		c = tab[s];
		tab[s] = tab[d];
		tab[d] = c;
		d--;
		s++;
	}
}