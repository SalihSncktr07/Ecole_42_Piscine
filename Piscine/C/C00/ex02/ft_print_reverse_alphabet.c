/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:33:34 by spirnaz           #+#    #+#             */
/*   Updated: 2021/11/30 02:06:18 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	r_alphabet;

	r_alphabet = 'z';
	while (r_alphabet >= 'a')
	{
		ft_putchar(r_alphabet);
		r_alphabet--;
	}
}
