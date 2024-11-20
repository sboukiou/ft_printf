#include "printf.h"
#include "libft/libft.h"


void	ft_putnbr(int	number)
{
	if (number < 10)
	{
		ft_putchar_fd(number + '0', STDOUT_FILENO);
		return ;
	}
	ft_putnbr(number / 10);
	ft_putchar_fd(number % 10 + '0', STDOUT_FILENO);
}
