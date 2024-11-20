#include "libft/libft.h"
#include "printf.h"

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

	index = 1;
	while (!is_set(buffer[index], TYPES))
		index++;
	if (buffer[index] == 'c')
		print_char(va_arg(args_list, int));
	else if (buffer[index] == 'd' || buffer[index] == 'i')
		print_int(va_arg(args_list, int), get_flags(buffer));
	return (index);
}
