/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:08:08 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:08:40 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf.h"

int	print_hex_large(unsigned long number, int hash)
{
	int	len;

	len = 0;
	if (!hash)
		len += print_string("0x");
	if (!number)
		return (len += print_char('0'));
	if (number < 16)
		return (len += print_char(HEX_BASE[number]));
	len += print_hex_large(number / 16, 1);
	len += print_char(HEX_BASE[number % 16]);
	return (len);
}

int	print_address_bonus(void	*address, t_tokens *tokens)
{
	unsigned long	addr_value;
	int				len;
	int				hex_len;

	len = 0;
	addr_value = (unsigned long)address;
	hex_len = get_hex_len(addr_value, 1);
	if (!address)
		return (print_string_bonus("(nil)", tokens));
	if (tokens->minus)
	{
		len += print_hex_large(addr_value, tokens->hash);
		while (len < tokens->width)
			len += print_char(' ');
		return (len);
	}
	if (tokens->plus)
		len += print_char('+');
	else if (tokens->space)
		len += print_char(' ');
	while (len < tokens->width - hex_len)
		len += print_char(' ');
	len += print_hex_large(addr_value, tokens->hash);
	return (len);
}
