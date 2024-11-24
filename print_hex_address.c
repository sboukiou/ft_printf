#include "ft_printf.h"
#include "ft_printf_bonus.h"

int print_hex_x(unsigned int number, t_tokens *tokens)
{
	int	len;
	len = 0;
	len += print_hex(number, !tokens->hash);
	return (len);
}

int print_hex_X(unsigned int number, t_tokens *tokens)
{
	int	len;
	len = 0;
	len += print_hex_upper(number, !tokens->hash);
	return (len);
}
