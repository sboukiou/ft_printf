#include "./libft/libft.h"
#include "printf.h"


int	ft_printf(const char *buffer, ...)
{
	int	len;
	int	index;

	len = 0;
	index = 0;
	if (!buffer)
	{
		ft_putstr_fd("(nil)", 1);
		return (1);
	}
	while (buffer[index])
	{
		if (buffer[index] == '%')
		{
			ft_putstr_fd("found ->", 1);
			ft_putchar_fd(buffer[index], 1);
			ft_putchar_fd(buffer[index + 1], 1);
			ft_putchar_fd('\n', 1);
			index ++;
		}
		else
			ft_putchar_fd(buffer[index], 1);
		index++;
	}
	return (len);
}
