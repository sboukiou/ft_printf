#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	call_printer(t_tokens *tokens, va_list args_list)
{
	int	ret_val;

	if (!tokens)
		return (0);
	if (tokens->type == CHAR)
		ret_val = print_char(va_arg(args_list, int));
	else if (tokens->type ==  STR)
		ret_val = print_string(va_arg(args_list, char *));
	else if (tokens->type ==  DECIM || tokens->type == INT)
		ret_val = print_integers(va_arg(args_list, int), tokens);
	else if (tokens->type == PRCND)
		ret_val = print_char('%');
	else if (tokens->type == UNSI)
		ret_val = print_integers(va_arg(args_list, unsigned int), tokens);
		ret_val = print_char('%');
	free(tokens);
	return (ret_val);
}
