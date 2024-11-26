#include "libft/libft.h"
#include "ft_printf.h"
static int	print_spaces(int count)
{
	int len;

	len = 0;
	while (len < count)
		len += print_char(' ');
	return (len);
}

static int	print_zeros(int count)
{
	int len;

	len = 0;
	while (len < count)
		len += print_char('0');
	return (len);
}


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

static int	print_minus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->prec > tokens->width)
	{
		if (tokens->plus)
			len += print_char('+');
		else if (tokens->space)
			len += print_char(' ');
		len += print_zeros(tokens->prec);
		len += print_large_unsigned(number);
		return (len);
	}
	else
	{
		len += print_spaces(tokens->width - tokens->prec);
		if (tokens->plus)
			len += print_char('+');
		else if (tokens->space)
			len += print_char(' ');
		len += print_zeros(tokens->prec - get_num_len(number));
		len += print_large_unsigned(number);
		return (len);
	}
	return (len);
}


int	print_unsigned_bonus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
		if (tokens->minus)
			return (print_minus(number, tokens));
		else if (tokens->zero)
		{
			if (tokens->plus)
				len += print_char('+');
			else if (tokens->space)
				len += print_char(' ');
			while (len < tokens->width - get_num_len(number))
				len += print_char('0');
				
		}
		else
		{
			while (len < tokens->width - get_num_len(number))
				len += print_char(' ');
			if (tokens->plus)
				len += print_char('+');
			else if (tokens->space)
				len += print_char(' ');
		}
		len += print_large_unsigned(number);
	return (len);
}
