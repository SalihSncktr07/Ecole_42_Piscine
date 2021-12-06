/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 03:43:39 by spirnaz           #+#    #+#             */
/*   Updated: 2021/12/06 03:43:42 by spirnaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	end;

	i = 0;
	end = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (end && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!end && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			end = 0;
		}
		else
		{
			end = 1;
		}
		i++;
	}
	return (str);
}
