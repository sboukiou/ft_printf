#include "libft/libft.h"
#include "ft_printf.h"

static int	print_string_precision(char *str, t_tokens *tokens)
{
	unsigned int	i;
	unsigned int	max;

	i = 0;
	if (tokens->prec > tokens->width)
		max = tokens->prec;
	else
		max = tokens->width;
	i += print_spaces(max - ft_strlen(str));
	i += print_string(str);
	return (i);
}

int	print_string_bonus(char *string, t_tokens *tokens)
{
	int	len;

	if (!string)
		string  = "(null)";
	len = 0;
	if (tokens->point)
	{
		len += print_string_precision(string, tokens);
		return (len);
	}
	else if (tokens->minus)
	{
		len += print_string(string);
		while (len < tokens->width)
			len += print_char(' ');
		return (len);
	}
	else
	{
		len = ft_strlen(string);
		while (len < tokens->width)
			len += print_char(' ');
		print_string(string);
	}
	return (len);
}
