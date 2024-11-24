#include "./libft/libft.h"
#include "ft_printf_bonus.h"

static int	print_char_minus(char c, int width)
{
	int	len;

	len = 0;
	len += print_char(c);
	while (len < width)
	{
		print_char(' ');
		len++;
	}
	return (len);
}

int	print_char_bonus(char c, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->minus)
		len += print_char_minus(c, tokens->width);
	else
	{
		len++;
		while (len < tokens->width)
		{
			print_char(' ');
			len++;
		}
		print_char(c);
	}
	return (len);
}
