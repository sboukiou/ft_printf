/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:57:56 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:00:12 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int	ft_max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int	print_spaces(int count)
{
	int	len;

	len = 0;
	while (len < count)
		len += print_char(' ');
	return (len);
}

int	print_zeros(int count)
{
	int	len;

	len = 0;
	while (len < count)
		len += print_char('0');
	return (len);
}

int	get_num_len(long long number)
{
	int	len;

	len = 0;
	if (!number)
		return (1);
	if (number < 0)
	{
		number *= -1;
		len++;
	}
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}
