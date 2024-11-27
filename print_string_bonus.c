#include "libft/libft.h"
#include "ft_printf.h"

static int	print_string_precision(char *str, t_tokens *tokens)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	len += print_spaces(tokens->width - ft_strlen(str));
	while (i < tokens->prec && str[i])
		print_char(str[i++]);
	return (len + i);
}

int	print_string_bonus(char *string, t_tokens *tokens)
{
	int	len;

	if (string == NULL)
		string  = "(null)";
	len = 0;
	if (tokens->point)
	{
		return (print_string_precision(string, tokens));
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
