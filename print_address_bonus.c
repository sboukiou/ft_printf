#include "ft_printf.h"
#include "ft_printf.h"


int	print_hex_large(unsigned long number, int hash)
{

	int	len;

	len = 0;
	if (!hash)
		len += print_string("0x");
	if (!number)
		return (len += print_char('0'));
	if (number < 16)
		return (len += print_char(HEX_BASE[number]));
	len += print_hex_large(number / 16, 1);
	len += print_char(HEX_BASE[number % 16]);
	return (len);
}


int	print_address_bonus(void	*address, t_tokens *tokens)
{
	unsigned long	addr_value;
	int				len;

	len = 0;
	addr_value = (unsigned long)address;
	if (!address)
		return (print_string_bonus("(nil)", tokens));
	else
	{
		if (tokens->minus)
		{
			len += print_hex_large(addr_value, tokens->hash);
			while (len < tokens->width)
				len += print_char(' ');
			return (len);
		}
		else if (tokens->space)
		{
			len += print_hex_large(addr_value, tokens->hash);
			while (len < tokens->width)
				len += print_char(' ');
			return (len);
		}
	}
	return (print_hex_large(addr_value, 0));
}

