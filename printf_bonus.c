#include "./libft/libft.h"
#include "ft_printf_bonus.h"


int	ft_printf(const char *buffer, ...)
{
	int		total_length;
	int		index;
	va_list	args_list;
	t_tokens	*tokens;

	va_start(args_list, buffer);


	index = 0;
	total_length = 0;
	if (!buffer)
	{
		print_string("NULL");
		return (4);
	}
	while (buffer[index])
	{
		if (buffer[index] == '%')
		{
			tokens = get_tokens(buffer + index + 1);
			total_length += call_printer(tokens, args_list);
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
