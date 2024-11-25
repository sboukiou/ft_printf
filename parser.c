#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	call_printer(t_tokens *tokens, va_list args_list)
{
	int	ret_val;

	if (!tokens)
		return (0);
	if (tokens->type == CHAR)
		ret_val = print_char_bonus(va_arg(args_list, int), tokens);
	else if (tokens->type ==  STR)
		ret_val = print_string_bonus(va_arg(args_list, char *), tokens);
	else if (tokens->type ==  DECIM || tokens->type == INT)
		ret_val = print_integers(va_arg(args_list, int), tokens);
	else if (tokens->type == PRCND)
		ret_val = print_char('%');
	else if (tokens->type == UNSI)
		ret_val = print_unsigned_bonus(va_arg(args_list, unsigned int), tokens);
	else if (tokens->type == HEX_L)
		ret_val = print_hex_lower_bonus(va_arg(args_list, unsigned int), tokens);
	else if (tokens->type == HEX_U)
		ret_val = print_hex_upper_bonus(va_arg(args_list, unsigned int), tokens);
	else if (tokens->type == PTR)
		ret_val = print_address_bonus(va_arg(args_list, void *), tokens);
	free(tokens);
	return (ret_val);
}
