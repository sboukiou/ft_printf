#include "libft/libft.h"
#include "ft_printf.h"

static unsigned int	ft_handle_sign(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		return ((unsigned int)-n);
	}
	return ((unsigned int)n);
}

int	ft_putnbr_fld(int n, int fd)
{
	unsigned int	number;
	char			buffer[20];
	int	len;

	ft_bzero(buffer, 20);
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	}
	number = ft_handle_sign(n, fd);
	ft_bzero(buffer, 20);
	n = 0;
	while (number > 0)
	{
		buffer[n++] = (number % 10) + '0';
		number /= 10;
	}
	len = n;
	while (n > 0)
	{
		ft_putchar_fd(buffer[n - 1], fd);
		n--;
	}
	return (len);
}
