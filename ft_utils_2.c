/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:59:36 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:23:16 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_large_numbers(long long number)
{
	int	len;

	len = 0;
	if (!number)
		return (print_char('0'));
	if (number < 0)
	{
		len += print_char('-');
		number *= -1;
	}
	if (number < 10)
		return (len += print_char(number + '0'));
	len += print_large_numbers(number / 10);
	len += print_char(number % 10 + '0');
	return (len);
}

int	get_hex_len(unsigned long number, int hash)
{
	int	len;

	len = 0;
	if (hash && number)
		len += 2;
	if (!number)
		return (len + 1);
	while (number > 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}

int	print_large_unsigned(unsigned long number)
{
	int	len;

	len = 0;
	if (!number)
		return (print_char('0'));
	if (number < 10)
		return (len += print_char(number + '0'));
	len += print_large_unsigned(number / 10);
	len += print_char(number % 10 + '0');
	return (len);
}
