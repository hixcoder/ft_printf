#include "ft_printf.h"

static int	ft_strlen1(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putnbr_base2(unsigned long nbr, char *base)
{
	unsigned long	len_base;
	int			count;

	len_base = (unsigned long) ft_strlen1(base);
	count = 0;
	if (nbr < len_base)
		count += ft_putchar(base[nbr % len_base]);
	else
	{
		count += ft_putnbr_base((nbr / len_base), base);
		count += ft_putnbr_base((nbr % len_base), base);
	}
	return (count);
}
