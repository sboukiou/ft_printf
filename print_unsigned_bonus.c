/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:13:00 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:41:18 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	print_prec(long number, t_tokens *tokens)
{
	int	len;
	int	num_len;

	len = 0;
	num_len = get_num_len(number);
	len += print_spaces(tokens->width - ft_max(tokens->prec, num_len));
	len += print_zeros(tokens->prec - get_num_len(number));
	return (len);
}

static int	print_minus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->point)
	{
		len += print_zeros(tokens->prec - get_num_len(number));
		if (tokens->prec || number)
			len += print_large_unsigned(number);
		else
			len += print_char(' ');
		len += print_spaces(tokens->width - len);
		return (len);
	}
	else
	{
		if (tokens->plus)
			len += print_char('+');
		len += print_large_unsigned(number);
		len += print_spaces(tokens->width - len);
		return (len);
	}
	return (len);
}

static int	print_no_flags(unsigned long number, t_tokens *tokens)
{
	int	len;
	int	num_len;

	len = 0;
	num_len = get_num_len(number);
	if (tokens->space && !tokens->plus)
		len += print_char(' ');
	len += print_spaces(tokens->width - num_len - len - tokens->plus);
	if (tokens->plus)
		len += print_char('+');
	len += print_large_unsigned(number);
	return (len);
}

int	print_unsigned_bonus(unsigned long number, t_tokens *tokens)
{
	int	len;

	len = 0;
	if (tokens->minus)
		return (print_minus(number, tokens));
	if (tokens->point)
	{
		len += print_prec(number, tokens);
		if ((tokens->prec || number))
			len += print_large_unsigned(number);
		else if (tokens->width)
			len += print_char(' ');
		return (len);
	}
	else if (tokens->zero)
	{
		if (tokens->plus)
			len += print_char('+');
		else if (tokens->space)
			len += print_char(' ');
		len += print_zeros(tokens->width - get_num_len(number) - len);
		len += print_large_unsigned(number);
		return (len);
	}
	return (print_no_flags(number, tokens));
}
