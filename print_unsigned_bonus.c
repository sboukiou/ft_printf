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

int	print_zero(unsigned int number, t_tokens *tokens)
{
	int	len;

	len = 0;
	print_zeros(tokens->width - get_num_len(number));
	return (len);
}


static int	print_minus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->point && tokens->prec > tokens->width)
	{
		if (tokens->plus)
			len += print_char('+');
		else if (tokens->space)
			len += print_char(' ');
		len += print_zeros(tokens->prec - get_num_len(number));
		len += print_large_unsigned(number);
		return (len);
	}
	else
	{
		if (tokens->plus)
			len += print_char('+');
		len += print_zeros(tokens->prec - get_num_len(number) - 1);
		if (tokens->zero)
			len += print_zeros(tokens->width - get_num_len(number));
		len += print_large_unsigned(number);
		len += print_spaces(tokens->width - len);
		return (len);
	}
	return (len);
}

static int	print_prec(long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	len += print_spaces(tokens->width - tokens->prec);
	len += print_zeros(tokens->prec - get_num_len(number));
	len += print_large_numbers(number);
	return (len);
}


int	print_unsigned_bonus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
		if (tokens->minus)
			return (print_minus(number, tokens));
		if (tokens->prec)
			return (print_prec(number, tokens));
		else if (tokens->zero)
		{
			if (tokens->plus)
				len += print_char('+');
			else if (tokens->space)
				len += print_char(' ');
			len += print_zeros(tokens->width - get_num_len(number) - len);
		}
		else
		{
			if (tokens->space && !tokens->plus)
				len += print_char(' ');
			len += print_spaces(tokens->width - get_num_len(number) - len - tokens->plus);
			if (tokens->plus)
				len += print_char('+');
		}
		len += print_large_unsigned(number);
	return (len);
}
