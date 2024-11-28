#include "libft/libft.h"
#include "ft_printf.h"
int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int	ft_max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int	print_spaces(int count)
{
	int len;

	len = 0;
	while (len < count)
		len += print_char(' ');
	return (len);
}

int	print_zeros(int count)
{
	int len;

	len = 0;
	while (len < count)
		len += print_char('0');
	return (len);
}


int	get_num_len(long long number)
{
	int	len;

	len = 0;
	if (!number)
		return (1);
	if (number < 0)
	{
		number *= -1;
		len++;
	}
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

int	print_large_numbers(long long number)
{
	int	len;

	len = 0;
	if (!number)
		return (print_char('0'));
	if (number < 0)
	{
		len += print_char('-');
		number *= -1;
	}
	if (number < 10)
		return (len += print_char(number + '0'));
	len += print_large_numbers(number / 10);
	len += print_char(number % 10 + '0');
	return (len);
}

int	get_hex_len(unsigned long number, int hash)
{
	int	len;

	len = 0;
	if (hash && number)
		len += 2;
	if (!number)
		return (len + 1);
	while (number > 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}

