#include "ft_printf_bonus.h"
#include "libft/libft.h"

static int	handle_minus_for_int(int number, t_tokens *tokens)
{
	int	number_len;
	int	len;

	number_len = get_num_len(number);
	len = 0;
	if (tokens->plus && number >= 0)
	{
		len += print_char('+');
		number_len++;
	}
	if (tokens->space && number >= 0)
	{
		len += print_char(' ');
		number_len++;
	}
	len += print_large_numbers(number);
	while (len < tokens->width)
	{
		len += print_char(' ');
		number_len++;
	}

	return (len);
}


static int	handle_space_for_int(int number, t_tokens *tokens)
{
	int	number_len;
	int len;

	number_len = get_num_len(number);
	len = 0;
	if (!tokens->width && number >= 0)
		len += print_char(' ');
	else if (tokens->width > number_len)
	{
		while (number_len < tokens->width)
		{
			len += print_char(' ');
			number_len++;
		}
	}
	len += print_large_numbers(number);
	return (len);
}

static unsigned int	ft_abs(int number)
{
	if (number >= 0)
		return (number);
	return (-number);
}

static int	handle_zero_for_int(int number, t_tokens *tokens)
{

	int	number_len;
	int	len;

	number_len = get_num_len(number);
	len = 0;
	if (tokens->space && number >= 0)
	{
		len += print_char(' ');
		number_len++;
	}
	else if (tokens->plus && number >= 0)
	{
		len += print_char('+');
		number_len++;
	}
	if (number < 0)
	{
		len += print_char('-');
	}
	while (number_len < tokens->width)
	{
		len += print_char('0');
		number_len++;
	}
	if (number == -2147483648)
		len += print_string("2147483648");
	else
		len += print_large_numbers(ft_abs(number));

	return (len);
}

int	handle_plus_for_int(int number, t_tokens *tokens)
{
	int	number_len;
	int	len;

	len = 0;
	number_len = get_num_len(number);
	while (number_len + 1 < tokens->width)
	{
		len += print_char(' ');
		number_len++;
	}
	if (number >= 0)
		len += print_char('+');
	len += print_large_numbers(number);
	return (len);
}

int	print_integers(long number, t_tokens *tokens)
{
	int	number_len;
	int	len;

	len = 0;
	number_len = get_num_len(number);
	if (tokens->minus)
		len += handle_minus_for_int(number, tokens);
	else if (tokens->plus)
			len += handle_plus_for_int(number, tokens);
	else if (tokens->space)
		len += handle_space_for_int(number, tokens);
	else if (tokens->zero)
			len += handle_zero_for_int(number, tokens);
	else
	{
		while (number_len < tokens->width)
		{
			len += print_char(' ');
			number_len++;
		}
		len += print_large_numbers(number);
	}
	return (len);
}
