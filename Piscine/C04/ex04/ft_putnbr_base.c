/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:26:27 by spirnaz           #+#    #+#             */
/*   Updated: 2022/10/22 20:26:34 by spirnaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	find_base(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		if (c <= 32 || c == 127 || c == 43 || c == 45)
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == c)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	long	n;

	n = nbr;
	b = find_base(base);
	if (b >= 2)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n >= b)
		{
			ft_putnbr_base(n / b, base);
			ft_putnbr_base(n % b, base);
		}
		else
		{
			write(1, base + n, 1);
		}	
	}
}
