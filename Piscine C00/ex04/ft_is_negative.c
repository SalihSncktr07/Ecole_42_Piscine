#include <unistd.h>

void	ft_is_negative(int n)
{
	char	poz;
	char	neg;

	poz = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &poz, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
