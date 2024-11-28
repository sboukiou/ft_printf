#include "ft_printf.h"
#include "libft/libft.h"

static int	print_prec(long number, t_tokens *tokens)
{
	int	len;
	int	num_len;

	len = 0;
	num_len = get_num_len(number);
	len += print_spaces(tokens->width - ft_max(num_len, tokens->prec + 1));
	len += print_char('-');
	len += print_zeros(tokens->prec - num_len + 1);
	return (len);
}

static int	print_minus(long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->point)
	{
		len += print_char('-');
		len += print_zeros(tokens->prec - get_num_len(number) + 1);
		len += print_large_numbers(-number);
		len += print_spaces(tokens->width - len);
	}
	else
	{
		len += print_large_numbers(number);
		len += print_spaces(tokens->width - len);
	}
	return (len);
}

int	print_integers_bonus(int number, t_tokens *tokens)
{
	int	len;

	if (number >= 0)
		return (print_unsigned_bonus(number, tokens));
	len = 0;
	if (tokens->minus)
		return (print_minus(number, tokens));
	if (tokens->point)
	{
		len += print_prec(number, tokens);
		if (tokens->prec || tokens->width)
			len += print_large_numbers((unsigned int)-number);
		else
			len += print_char(' ');
		return (len);
	}
	if (tokens->zero)
	{
		len += print_char('-');
		len += print_zeros(tokens->width - get_num_len(number));
		len += print_large_numbers((unsigned int)-number);
	}
	else
	{
		len += print_spaces(tokens->width - get_num_len(number));
		len += print_large_numbers(number);
	}
	return (len);
}
