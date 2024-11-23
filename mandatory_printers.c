#include "libft/libft.h"
#include "ft_printf.h"

int	print_unsigned(unsigned int number)
{
	int	len;
	if (!number)
		return (print_char('0'));
	len = 0;
	if (number < 10)
		return (print_char(number + '0'));
	len += print_unsigned(number / 10);
	len += print_char(number % 10 + '0');
	return (len);
}

int	print_hex(unsigned int number, int hash)
{

	int	len;

	len = 0;
	if (!hash)
		len += print_string("0x");
	if (!number)
		return (len += print_char('0'));
	if (number < 16)
		return (len += print_char(HEX_BASE[number]));
	len += print_hex(number / 16, 1);
	len += print_char(HEX_BASE[number % 16]);
	return (len);
}

int	print_hex_upper(unsigned int number, int hash)
{

	int	len;

	len = 0;
	if (!hash)
		len += print_string("0X");
	if (!number)
		return (print_char('0'));
	if (number < 16)
		return (print_char(HEX_BASE_UPPER[number]));
	len += print_hex_upper(number / 16, 1);
	len += print_char(HEX_BASE_UPPER[number % 16]);
	return (len);
}


static int	print_hex_large(long int number, int hash)
{

	int	len;

	len = 0;
	if (!hash)
		len += print_string("0x");
	if (!number)
		return (len += print_char('0'));
	if (number < 16)
		return (len += print_char(HEX_BASE[number]));
	len += print_hex(number / 16, 1);
	len += print_char(HEX_BASE[number % 16]);
	return (len);
}



int	print_address(void	*address)
{
	unsigned long	addr_value;

	addr_value = (unsigned long)address;
	if (!addr_value)
		return (print_string("(nil)"));
	return (print_hex_large(addr_value, 0));
}


int	ft_printf(const char *format, ...)
{
	int	total_len;
	int	index;
	va_list	args_list;

	index = 0;
	total_len = 0;
	va_start(args_list, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '%')
				total_len += print_char('%');
			else if (format[index] == 'c')
				total_len += print_char(va_arg(args_list, int));
			else if (format[index] == 's')
				total_len += print_string(va_arg(args_list, char *));
			else if (format[index] == 'd' || format[index] == 'i')
				total_len += ft_putnbr_fld(va_arg(args_list, int), STDOUT);
			else if (format[index] == 'u')
				total_len += print_unsigned(va_arg(args_list, unsigned int));
			else if (format[index] == 'p')
				total_len += print_address(va_arg(args_list, void *));
			else if (format[index] == 'X')
				total_len += print_hex_upper(va_arg(args_list, long long), 1);
			else if (format[index] == 'x')
				total_len += print_hex(va_arg(args_list, long long), 1);
		}
		else
			total_len += print_char(format[index]);
		index++;
	}
	return (total_len);
}
