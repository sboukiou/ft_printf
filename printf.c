#include "./libft/libft.h"
#include "./printf.h"

int sum_them_all(const unsigned int n, ...)
{
	int	sum;
	unsigned int	count;
	va_list	list;

	count = 0;
	sum = 0;
	va_start(list, n);
	while (count < n)
	{
		sum += va_arg(list, int);
		count++;
	}
	return (sum);
}

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	args_list;
	unsigned int		count;
	int		data;

	va_start(args_list, n);
	count = 0;
	while (count < n - 1)
	{
		data = va_arg(args_list, int);
		ft_putnbr_fd(data, 1);
		if (separator)
			ft_putstr_fd((char *)separator, 1);
		count++;

	}
	data = va_arg(args_list, int);
	ft_putnbr_fd(data, 1);
	va_end(args_list);
}

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			args_list;
	unsigned int	count;
	void	*data;

	va_start(args_list, n);
	count = 0;
	while (count < n - 1)
	{
		data = va_arg(args_list, char *);
		if (data)
			ft_putstr_fd((char *)data, 1);
		else
			ft_putstr_fd("(nil)", 1);
		if (separator)
			ft_putstr_fd((char *)separator, 1);
		count++;
	}
	data = va_arg(args_list, char *);
	if (data)
		ft_putstr_fd((char *)data, 1);
	else
		ft_putstr_fd("(nil)", 1);

}
