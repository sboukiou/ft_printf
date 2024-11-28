/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:05:44 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:07:43 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	call_printer(t_tokens *tokens, va_list args_list)
{
	int	ret_val;

	if (!tokens)
		return (0);
	ret_val = 0;
	if (tokens->type == CHAR)
		ret_val = print_char_bonus(va_arg(args_list, int), tokens);
	else if (tokens->type == STR)
		ret_val = print_string_bonus(va_arg(args_list, char *), tokens);
	else if (tokens->type == DECIM || tokens->type == INT)
		ret_val = print_integers_bonus(va_arg(args_list, long), tokens);
	else if (tokens->type == PRCND)
		ret_val = print_char('%');
	else if (tokens->type == UNSI)
		ret_val = print_unsigned_bonus(va_arg(args_list, unsigned int), tokens);
	else if (tokens->type == HEX_L)
		ret_val = print_hex_l_bonus(va_arg(args_list, unsigned int), tokens);
	else if (tokens->type == HEX_U)
		ret_val = print_hex_u_bonus(va_arg(args_list, unsigned int), tokens);
	else if (tokens->type == PTR)
		ret_val = print_address_bonus(va_arg(args_list, void *), tokens);
	free(tokens);
	return (ret_val);
}
