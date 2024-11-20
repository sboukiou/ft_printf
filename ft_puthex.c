#include "printf.h"
#include "libft/libft.h"


void	ft_print_hex(size_t	number)
{
	if (number < 15)
	{
		print_char(HEX_BASE[number]);
		return ;
	}
	ft_print_hex(number / 15);
	print_char(HEX_BASE[number % 15]);
}
