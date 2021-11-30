/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:31:06 by spirnaz           #+#    #+#             */
/*   Updated: 2021/11/29 17:19:15 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r != y + 1)
	{
		c = 1;
		while (c != x + 1)
		{
			if ((r == 1 && c == 1) || (r == y && c == x && c != 1 && r != 1))
				ft_putchar ('A');
			else if ((r == 1 && c == x) || (r == y && c == 1))
				ft_putchar ('C');
			else if ((r == 1) || (r == y) || (c == 1) || (c == x))
				ft_putchar ('B');
			else
				ft_putchar (' ');
			c++;
		}
		ft_putchar ('\n');
		r++;
	}
}
