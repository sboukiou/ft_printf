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

void	print_int(int number, t_flags *flags)
{
	if (flags->space == 1)
	{
		if (number < 0)
			ft_putstr_fd(" ", STDOUT_FILENO);
	}
	if (flags->plus == 1)
	{
		if (number > 0)
			ft_putstr_fd("+", STDOUT_FILENO);

	}
	if (flags->type == INT || flags->type == DECIM)
		ft_putnbr_fd((int )number, STDOUT_FILENO);
	ft_putnbr_fd(number, STDOUT);
}
