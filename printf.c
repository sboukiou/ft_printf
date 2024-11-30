/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:22:16 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:29:05 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	check_precnd(char *str)
{
	int	i;

	i = 0;
	while (is_set(str[i], FLAGS))
		i++;
	if (!is_set(str[i], TYPES))
		return (-1);
	return (0);
}

int	ft_printf(const char *buffer, ...)
{
	int			total_length;
	int			index;
	va_list		args_list;
	t_tokens	*tokens;

	va_start(args_list, buffer);
	index = 0;
	total_length = 0;
	if (!buffer || write(1, 0, 0) < 0)
		return (-1);
	while (buffer[index++])
	{
		if (buffer[index] == '%')
		{
			tokens = get_tokens(buffer + index + 1);
			total_length += call_printer(tokens, args_list);
			while (!is_set(buffer[index + 1], TYPES))
				index++;
			index++;
		}
		else
			total_length += print_char(buffer[index]);
	}
	va_end(args_list);
	return (total_length);
}
