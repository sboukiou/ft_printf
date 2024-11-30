/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:50:37 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/30 17:50:38 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	handle_format(const char *buffer, va_list args_list, int *index)
{
	t_tokens	*tokens;
	int			total;

	total = 0;
	tokens = get_tokens(buffer + *index + 1);
	total = call_printer(tokens, args_list);
	if (total == -1)
	{
		print_char(buffer[*index]);
		print_char(buffer[*index + 1]);
		return (2);
	}
	while (!is_set(buffer[*index + 1], TYPES))
		(*index)++;
	return (total);
}

int	ft_printf(const char *buffer, ...)
{
	int			total_length;
	int			index;
	va_list		args_list;

	va_start(args_list, buffer);
	index = 0;
	total_length = 0;
	if (!buffer || write(1, 0, 0) < 0)
		return (-1);
	while (buffer[index])
	{
		if (buffer[index] == '%')
		{
			total_length += handle_format(buffer, args_list, &index);
			index++;
		}
		else
			total_length += print_char(buffer[index]);
		index++;
	}
	va_end(args_list);
	return (total_length);
}
