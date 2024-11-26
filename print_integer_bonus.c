#include "ft_printf.h"
#include "libft/libft.h"

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

static int	print_minus(long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->prec > tokens->width)
	{
		len += print_char('-');
		len += print_zeros(tokens->prec);
		len += print_large_numbers(-number);
	}
	else
	{
		len += print_spaces(tokens->width - tokens->prec);
		len += print_zeros(tokens->prec - get_num_len(number));
		len += print_large_numbers(number);
	}
	return (len);
}

int	print_prec(long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	len += print_spaces(tokens->width - tokens->prec);
	len += print_char('-');
	len += print_zeros(tokens->prec - get_num_len(number) + 1);
	len += print_large_numbers(number * -1);
	return (len);
}

int	print_integers_bonus(long number, t_tokens *tokens)
{
	int	len;

	if (number >= 0)
		return (print_unsigned_bonus(number, tokens));
	len = 0;
	if (tokens->minus)
		return (print_minus(number, tokens));
	if (tokens->point)
		return (print_prec(number, tokens));
	if (tokens->zero)
	{
		len += print_char('-');
		len += print_zeros(tokens->width - get_num_len(number));
		len += print_large_numbers(number * -1);
	}
	else
	{
		len += print_spaces(tokens->width - get_num_len(number));
		len += print_large_numbers(number);
	}
	return (len);
}
