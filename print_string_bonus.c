#include "libft/libft.h"
#include "ft_printf.h"

static int	print_string_precision(char *str, t_tokens *tokens)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str && tokens->prec >= 6)
		str = "(null)";
	else
		str = "";
	if (tokens->minus)
		while (i < tokens->prec && str[i])
			print_char(str[i++]);
	len += print_spaces(tokens->width - ft_min(ft_strlen(str), tokens->prec));
	if (!tokens->minus)
		while (i < tokens->prec && str[i])
			print_char(str[i++]);
	return (len + i);
}

int	print_string_bonus(char *string, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->point || tokens->prec)
		return (print_string_precision(string, tokens));
	else if (tokens->minus)
	{
		if (!string && !tokens->prec)
			string =  "(null)";
		len += print_string(string);
		while (len < tokens->width)
			len += print_char(' ');
		return (len);
	}
	else
	{
		if (!string)
			string =  "(null)";
		len = ft_strlen(string);
		while (len < tokens->width)
			len += print_char(' ');
		print_string(string);
	}
	return (len);
}
