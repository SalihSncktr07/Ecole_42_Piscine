#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    alphabet;

    alphabet = 'z';
    while (alphabet >= 'a')
    {
        ft_putchar(alphabet);
        alphabet--;
    }
}
