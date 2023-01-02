#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int len;

	len = ft_strlen(str) - 1;
	while (0 <= len)
	{
		write(1, &str[len], 1);
		len--;
	}
	str[len] = '\0';
	return (str);	
}

int main()
{
	char a[] = "okul";
	ft_strrev(a);
}