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


void	handle_width(int width, int number_len, char indice)
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


void	print_int(int number, t_flags *flags)
{
	int	number_len;

	number_len = get_num_len(number);
	if (flags->space)
		handle_width(flags->width, number_len, ' ');
	if (flags->plus)
	{
		if (number >= 0)
			handle_width(flags->width, number_len + 1, '+');
		else
			handle_width(flags->width, number_len, 0);
	}
	ft_putnbr_fd(number, STDOUT);
}
