/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:44:04 by spirnaz           #+#    #+#             */
/*   Updated: 2021/12/01 00:48:20 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		count;
	char	nex_char;

	count = 0;
	while (true)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			return (count);
		}
		count += 1;
		str++;
	}
}
