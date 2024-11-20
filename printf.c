#include "./libft/libft.h"
#include "printf.h"


int	ft_printf(const char *buffer, ...)
{
	int	len;
	int	index;
	va_list	args_list;

	len = 0;
	va_start(args_list, buffer);
	index = 0;
	if (!buffer)
	{
		ft_putstr_fd("(nil)", 1);
		return (1);
	}
	while (buffer[index])
	{
		if (buffer[index] == '%')
			index += call_printer((char *)buffer + index, args_list);
		else
			ft_putchar_fd(buffer[index], 1);
		index++;
	}
	return (len);
}
