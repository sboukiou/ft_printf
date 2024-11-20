#include "./libft/libft.h"
#include "printf.h"

int	ft_printf(const char *buffer, ...)
{
	int	length;
	va_list	arguments;

	if (!buffer)
	{
		print_string("(nil)");
		return (0);
	}
	va_start(arguments, buffer);
	length = 0;
	while (buffer[length])
	{
		if (buffer[length] == '%')
		{
			length++;
			call_printer(buffer[length], arguments);
		}
		else
			print_char(buffer[length]);
		length++;
	}
	return (length);
}

