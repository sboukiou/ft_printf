#include "libft/libft.h"
#include "ft_printf.h"

int	is_set(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int	call_printer(char *buffer, va_list args_list)
{
	int	index;
	int	len;

	index = 1;
	len = 0;
	while (!is_set(buffer[index], TYPES))
		index++;
	if (buffer[index] == 'c')
		len += print_char((unsigned char)va_arg(args_list, int));
	else if (buffer[index] == 'd' || buffer[index] == 'i')
		len += print_int((int)va_arg(args_list, int), get_flags(buffer));
	return (len);
}
