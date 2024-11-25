#include "libft/libft.h"
#include "ft_printf.h"

static int	print_large_unsigned(unsigned long number)
{
	int	len;

	len = 0;
	if (!number)
		return (print_char('0'));
	if (number < 10)
		return (len += print_char(number + '0'));
	len += print_large_unsigned(number / 10);
	len += print_char(number % 10 + '0');
	return (len);
}


int	print_unsigned_bonus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
		if (tokens->minus)
		{
			len += print_large_unsigned(number);
			while (len < tokens->width)
				len += print_char(' ');
			return (len);
		}
		else if (tokens->zero)
			while (len < tokens->width - get_num_len(number))
				len += print_char('0');
		else
			while (len < tokens->width - get_num_len(number))
				len += print_char(' ');
		len += print_large_unsigned(number);
	return (len);
}
