#include "libft/libft.h"
#include "ft_printf.h"

/*static int	print_string_minus(char *string, int width)*/
/*{*/
/*	int	len;*/
/**/
/*	len = print_string(string);*/
/*	while (len < width)*/
/*		len += print_char(' ');*/
/*	return (len);*/
/*}*/

static int	print_string_precision(char *str, int precision)
{
	int	i;

	i = 0;
	while (i < precision && str[i])
	{
		print_char(str[i]);
		i++;
	}
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
		len += print_string_precision(string, tokens->prec);
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
