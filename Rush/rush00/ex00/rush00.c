/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:09:56 by spirnaz           #+#    #+#             */
/*   Updated: 2022/10/16 13:56:04 by spirnaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c != 1 && x != c) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((r != y && r != 1) && (c == 1 || c == x))
				ft_putchar('|');
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
