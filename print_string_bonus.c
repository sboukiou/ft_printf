#include "libft/libft.h"
#include "ft_printf.h"

static int	print_string_precision(char *str, t_tokens *tokens)
{
	int	i;
	int	len;
	int	max;

	if (!ft_strlen(str))
		return (0);
	i = 0;
	len = 0;
	if (tokens->prec > tokens->width)
		max = tokens->prec;
	else
		max = tokens->width;
	len += print_spaces(max - ft_strlen(str) + 1);
	while (len < max && str[i])
	{
		print_char(str[i]);
		i++;
		len++;
	}
	return (len);
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
