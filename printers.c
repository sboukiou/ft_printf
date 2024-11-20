#include "libft/libft.h"
#include "printf.h"


void	print_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	print_string(char *string)
{
	if (!string)
		return ;
	write(STDOUT_FILENO, string, ft_strlen(string));
}

void	print_integer(int num)
{
	if (!num)
		return ;
	ft_putnbr_fd(num, STDOUT_FILENO);
}

void	print_decimal(int	decimal)
{
	print_integer(decimal);
}

void	print_hex(unsigned long	number)
{
	while (number > 0)
	{
		print_char(HEX_BASE[number % 16]);
		number  = number / 16;
	}
}

void	print_address(void *address)
{
	unsigned long	address_num;

	address_num = (unsigned long)address;
	print_string("0x");
	print_hex(address_num);
}

void	print_number_base(size_t number, char *base)
{
	if (number < ft_strlen(base))
	{
		print_char(base[number]);
		return ;
	}
	print_number_base(number / 10, base);
		print_char(base[number % ft_strlen(base)]);
}

void	call_printer(char identifier, va_list arguments)
{
	if (identifier == 'c')
		print_char(va_arg(arguments, int));
	else if (identifier == 's')
		print_string(va_arg(arguments, char *));
	else if (identifier == 'd')
			print_number_base(va_arg(arguments, size_t), "0123456789");
	else if (identifier == 'p')
			print_address(va_arg(arguments, void *));
	else if (identifier == 'x')
			print_number_base(va_arg(arguments, size_t), "0123456789abcdef");
	else if (identifier == 'X')
			print_number_base(va_arg(arguments, size_t), "0123456789ABCDEF");
}

