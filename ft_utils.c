#include "libft/libft.h"
#include "ft_printf.h"
#include "ft_printf_bonus.h"

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

