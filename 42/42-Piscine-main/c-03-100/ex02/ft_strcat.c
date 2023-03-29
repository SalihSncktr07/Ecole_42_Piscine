int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (*string)k
	{
		i++;
		string++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	say;

	say = ft_len(dest);
	while (*src)
	{
		dest[say] = *src;
		say++;
		src++;
	}
	dest[say] = '\0';
	return (dest);
}
