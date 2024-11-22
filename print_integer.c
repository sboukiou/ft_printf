#include "ft_printf.h"
#include "libft/libft.h"

static int	handle_minus_for_int(int number, t_flags *flags)
{
	int	number_len;
	int	len;

	number_len = get_num_len(number);
	len = 0;
	if (flags->plus && number >= 0)
	{
		len += print_char('+');
		number_len++;
	}
	if (flags->space && number >= 0)
	{
		len += print_char(' ');
		number_len++;
	}
	len += ft_putnbr_fld(number, STDOUT);
	while (number_len < flags->width)
	{
		len += print_char(' ');
		number_len++;
	}

	return (len);
}


static int	handle_space_for_int(int number, t_flags *flags)
{
	int	number_len;
	int len;

	number_len = get_num_len(number);
	len = 0;
	if (!flags->width && number >= 0)
		len += print_char(' ');
	else if (flags->width > number_len)
	{
		while (number_len < flags->width)
		{
			len += print_char(' ');
			number_len++;
		}
	}
	len += ft_putnbr_fld(number, STDOUT);
	return (len);
}

static int	ft_abs(int number)
{
	if (number >= 0)
		return (number);
	return (-number);
}

static int	handle_zero_for_int(int number, t_flags *flags)
{

	int	number_len;
	int	len;

	number_len = get_num_len(number);
	len = 0;
	if (flags->space && number >= 0)
	{
		len += print_char(' ');
		number_len++;
	}
	else if (flags->plus && number >= 0)
	{
		len += print_char('+');
		number_len++;
	}
	if (number < 0)
		len += print_char('-');
	while (number_len < flags->width)
	{
		len += print_char('0');
		number_len++;
	}
	len += ft_putnbr_fld(ft_abs(number), STDOUT);
	return (len);
}

int	handle_plus_for_int(int number, t_flags *flags)
{
	int	number_len;
	int	len;

	len = 0;
	number_len = get_num_len(number);
	while (number_len + 1 < flags->width)
	{
		len += print_char(' ');
		number_len++;
	}
	if (number >= 0)
		len += print_char('+');
	else
		len += print_char(' ');
	len += ft_putnbr_fld(number, STDOUT);
	return (len);
}

int	print_int(int number, t_flags *flags)
{
	int	number_len;
	int	len;

	len = 0;
	number_len = get_num_len(number);
	if (flags->minus)
		len += handle_minus_for_int(number, flags);
	else if (flags->space)
		len += handle_space_for_int(number, flags);
	else if (flags->zero)
			len += handle_zero_for_int(number, flags);
	else if (flags->plus)
			len += handle_plus_for_int(number, flags);
	else
	{
		while (number_len < flags->width)
		{
			len += print_char(' ');
			number_len++;
		}
		len += ft_putnbr_fld(number, STDOUT);
	}
	free(flags);
	return (len);
}
