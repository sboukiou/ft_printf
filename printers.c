#include "libft/libft.h"
#include "ft_printf.h"

int	print_char(char c)
{
	ft_putchar_fd(c, STDOUT);
	return (1);
}

int	print_string(char *str)
{
	if (!str)
		return (0);
	ft_putstr_fd(str, STDOUT);
	return (ft_strlen(str));
}



