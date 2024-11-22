#include "printf.h"
#include "libft/libft.h"

static int	handle_minus_for_int(int number, t_flags *flags)
{
	int	number_len;

	number_len = get_num_len(number);
	if (flags->plus && number >= 0)
	{
		print_char('+');
		number_len++;
	}
	if (flags->space && number >= 0)
	{
		print_char(' ');
		number_len++;
	}
	ft_putnbr_fd(number, STDOUT);
	while (number_len < flags->width)
	{
		print_char(' ');
		number_len++;
	}

	return (flags->width);
}


static int	handle_space_for_int(int number, t_flags *flags)
{
	int	number_len;

	number_len = get_num_len(number);
	if (!flags->width && number >= 0)
		print_char(' ');
	else if (flags->width > number_len)
	{
		while (number_len < flags->width)
		{
			print_char(' ');
			number_len++;
		}
	}
	ft_putnbr_fd(number, STDOUT);
	return (number_len);
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

	number_len = get_num_len(number);
	if (flags->space && number >= 0)
	{
		print_char(' ');
		number_len++;
	}
	else if (flags->plus && number >= 0)
	{
		print_char('+');
		number_len++;
	}
	if (number < 0)
		print_char('-');
	while (number_len < flags->width)
	{
		print_char('0');
		number_len++;
	}
	ft_putnbr_fd(ft_abs(number), STDOUT);
	return (flags->width);
}

int	handle_plus_for_int(int number, t_flags *flags)
{
	int	number_len;

	number_len = get_num_len(number);
	while (number_len + 1 < flags->width)
	{
		print_char(' ');
		number_len++;
	}
	if (number >= 0)
		print_char('+');
	else
		print_char(' ');
	ft_putnbr_fd(number, STDOUT);
	return (flags->width);
}

int	print_int(int number, t_flags *flags)
{
	int	number_len;

	number_len = get_num_len(number);
	if (flags->minus)
		handle_minus_for_int(number, flags);
	else if (flags->space)
		handle_space_for_int(number, flags);
	else if (flags->zero)
			handle_zero_for_int(number, flags);
	else if (flags->plus)
			handle_plus_for_int(number, flags);
	else
	{
		while (number_len < flags->width)
		{
			print_char(' ');
			number_len++;
		}
		ft_putnbr_fd(number, STDOUT);
	}
	if (flags->width > number_len)
		return (flags->width);
	return (number_len);
}
