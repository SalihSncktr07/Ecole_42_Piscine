/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:26:56 by spirnaz           #+#    #+#             */
/*   Updated: 2022/10/22 20:26:59 by spirnaz          ###   ########.tr       */
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

int	evo(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;
	int	i;
	int	sign;
	int	sum;

	b = find_base(base);
	if (b < 2)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -sign;
	}
	sum = 0;
	while (evo (str[i], base) >= 0)
	{
		sum = sum * b;
		sum = sum + evo (str[i++], base);
	}
	return (sign * sum);
}
