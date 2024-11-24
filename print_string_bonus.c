#include "libft/libft.h"
#include "ft_printf_bonus.h"

static int	print_string_minus(char *string, int width)
{
	int	len;

	len = print_string(string);
	while (len < width)
		len += print_char(' ');
	return (len);
}

int	print_string_bonus(char *string, t_tokens *tokens)
{
	int	len;

	if (tokens->minus)
		len = print_string_minus(string, tokens->width);
	else
	{
		len = ft_strlen(string);
		while (len < tokens->width)
			len += print_char(' ');
	}
	return (len);
}
