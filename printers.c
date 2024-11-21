#include "libft/libft.h"
#include "printf.h"

void	print_char(char c)
{
	ft_putchar_fd(c, STDOUT);
}

void	print_string(char *str)
{
	ft_putstr_fd(str, STDOUT);
}


void	handle_sp_width_flags(int width, int number_len, char indice)
{
	if (width)
		while (number_len < width)
		{
			print_char(' ');
			number_len++;
		}
	if (indice)
		print_char(indice);
}

void	handle_zero_flag(int number, int width, int number_len)
{

	if (number < 0)
	{
		print_char('-');
		while (number_len++ < width)
			print_char('0');
		ft_putnbr_fd(-number, STDOUT);
	}
	else
	{
		while (number_len++ < width)
			print_char('0');
		ft_putnbr_fd(number, STDOUT);
	}
}


void	print_int(int number, t_flags *flags)
{
	int	number_len;

	number_len = get_num_len(number);
	if (flags->space)
		handle_sp_width_flags(flags->width, number_len + 1, ' ');
	if (flags->plus)
	{
		if (number >= 0)
			handle_sp_width_flags(flags->width, number_len + 1, '+');
		else
			handle_sp_width_flags(flags->width, number_len, 0);
	}
	if (flags->zero)
	{
		handle_zero_flag(number, flags->width, number_len);
		return ;
	}
	ft_putnbr_fd(number, STDOUT);
}
