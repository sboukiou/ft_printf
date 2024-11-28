/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:08:56 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:08:59 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

static int	print_char_minus(char c, int width)
{
	int	len;

	len = 0;
	len += print_char(c);
	while (len < width)
	{
		print_char(' ');
		len++;
	}
	return (len);
}

int	print_char_bonus(char c, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->minus)
		len += print_char_minus(c, tokens->width);
	else
	{
		len++;
		while (len < tokens->width)
		{
			print_char(' ');
			len++;
		}
		print_char(c);
	}
	return (len);
}
