/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_to_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:53:32 by gdogan            #+#    #+#             */
/*   Updated: 2021/12/12 22:20:06 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *numb)
{
	int	len;

	len = 0;
	while (numb[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	conv_to_words(char *numb)
{
	int	len;

	len = ft_strlen(numb);
	write(1, numb, len);
	write(1, " ", 1);
	if (len == 0)
	{
		write(1, "empty string\n", 13);
		return ;
	}
	if (len > 37)
	{
		write(1, "Length more then 37 is not supported\n", 37);
		return ;
	}
	char *single_digits[] =
	{
		"zero ", "one ", "two ",   "three ", "four ",
		"five ", "six ", "seven ", "eight ", "nine "
	};
	char *two_digits [] =
	{
		"", "ten ", "eleven ", "twelve ",
		"thirteen ",  "fourteen ", "fifteen ", "sixteen ",
		"seventeen ", "eighteen ", "nineteen "
	};
	char *tens_multiple [] =
	{
		"", "", "twenty ",
		"thirty ", "forty ", "fifty ",
		"sixty ", "seventy ", "eighty ",
		"ninety "
	};
	char *tens_power [] =
	{
		"", "hundred ", "thousand ",
		"billion ", "trillion ",
		"quadrillion ",
		"quintillion ", "sextillion ",
		"septillion ", "octillion ",
		"nonillion "
	};

	if (len == 1)
	{
		int w_len_sd;
		w_len_sd = ft_strlen(single_digits[*numb - '0']);
		write(1, single_digits[*numb - '0'], w_len_sd);
		return ;
	}

	while ( *numb != '\0')
	{
		if (len >= 3)
		{
			if(*numb - '0' != 0)
				{
				
					int w_len_sd;
					w_len_sd = ft_strlen(single_digits[*numb - '0']);
					int w_len_tp; 
					w_len_tp = ft_strlen(tens_power[len - 2]);
					write(1, single_digits[*numb - '0'], w_len_sd);
					write(1, tens_power[len - 2], w_len_tp);
				}
				--len;
		}
		else
		{
			if ( *numb == '1')
			{
				int sum; 
				sum = *numb - '0' + *(numb + 1) - '0';
				int w_len_td = ft_strlen(two_digits[sum]);
				write (1, two_digits[sum], w_len_td);
				return ;
			}
			else if (*numb == '2' && *(numb + 1) == '0')
			{
				write(1, "twenty\n", 7);
                return ;
			}
			else 
			{
				int i; 
				i = *numb - '0';
				int	w_len_tm;
				w_len_tm = ft_strlen(tens_multiple[i]);
				
				if (i ? tens_multiple[i] : "")
					write (1, tens_multiple[i], w_len_tm);
				else
					write (1, "", 1);
				++numb;
				if (*numb != '0')
				{
					int	w_len_sd;
					w_len_sd = ft_strlen(single_digits[*numb - '0']);
					write(1, single_digits[*numb - '0'], w_len_sd);
				}
			}
		}
		++numb;
	}
}
