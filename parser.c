#include "libft/libft.h"
#include "ft_printf.h"

int	call_printer(t_tokens *tokens, va_list args_list)
{
	if (!tokens)
		return (0);
	if (tokens->type == CHAR)
		return (print_char(va_arg(args_list, int)));
	else if (tokens->type ==  STR)
		return (print_string(va_arg(args_list, char *)));
	else if (tokens->type ==  DECIM || tokens->type == INT)
		return (print_int(va_arg(args_list, int), tokens));
	return (print_char('%'));
}
