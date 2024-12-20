/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:25:46 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:28:15 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	is_set(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static t_type	get_type(char c)
{
	if (c == 'c')
		return (CHAR);
	if (c == 's')
		return (STR);
	if (c == 'p')
		return (PTR);
	if (c == 'd')
		return (DECIM);
	if (c == 'i')
		return (INT);
	if (c == 'u')
		return (UNSI);
	if (c == 'x')
		return (HEX_L);
	if (c == 'X')
		return (HEX_U);
	if (c == '%')
		return (PRCND);
	return (ERR);
}

static int	fill_buffer(char *buffer, t_tokens *tokens)
{
	int	i;

	i = 0;
	while (is_set(buffer[i], FLAGS))
	{
		if (buffer[i] == '-')
			tokens->minus = 1;
		else if (buffer[i] == ' ')
			tokens->space = 1;
		else if (buffer[i] == '+')
			tokens->plus = 1;
		else if (buffer[i] == '#')
			tokens->hash = 1;
		else if (buffer[i] == '0')
			tokens->zero = 1;
		i++;
	}
	return (i);
}

t_tokens	*get_tokens(const char *buffer)
{
	int			i;
	t_tokens	*tokens;

	tokens = (t_tokens *)ft_calloc(1, sizeof(t_tokens));
	if (!tokens)
		return (NULL);
	i = fill_buffer((char *)buffer, tokens);
	tokens->width = ft_atoi(buffer + i);
	while (ft_isdigit(buffer[i]))
		i++;
	if (buffer[i] == '.')
	{
		tokens->point = 1;
		i++;
		tokens->prec = ft_atoi(buffer + i);
		while (ft_isdigit(buffer[i]))
			i++;
	}
	tokens->type = get_type(buffer[i]);
	return (tokens);
}
