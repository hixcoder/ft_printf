#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <limits.h>

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define LOWER_BASE "0123456789abcdef"
# define UPPER_BASE "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_base(long nbr, char *base);
int	ft_putnbr_base2(unsigned long nbr, char *base);
int	ft_putnbr(int n);
#endif
