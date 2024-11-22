#include "./libft/libft.h"
#include "printf.h"


int	ft_printf(const char *buffer, ...)
{
	int		total_length;
	int		index;
	va_list	args_list;

	va_start(args_list, buffer);


	index = 0;
	total_length = 0;
	if (!buffer || write(STDOUT, "", 0) < 0)
		return (-1);
	while (buffer[index])
	{
		if (buffer[index] == '%')
		{
			total_length += call_printer((char *)buffer + index, args_list);
			while (!is_set(buffer[index + 1], TYPES))
				index++;
			index++;
		}
		else
			total_length += print_char(buffer[index]);
		index++;
	}
	return (total_length);
}
