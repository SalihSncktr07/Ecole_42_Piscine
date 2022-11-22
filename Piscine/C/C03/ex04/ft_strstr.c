/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:34:57 by spirnaz           #+#    #+#             */
/*   Updated: 2022/10/18 01:49:57 by spirnaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main()
{
    char str1[] = "salih";
	char find1[] = "l";
	printf("%s\n", ft_strstr(str1, find1));
	char str[] = "eco42lde piscine asamasi";
	char find[] = "42";
	printf("%s\n", ft_strstr(str, find));
	char str2[] = "piscineaaa";
	char find2[] = "piscine";
	printf("%s\n", ft_strstr(str2, find2));
}
*/
