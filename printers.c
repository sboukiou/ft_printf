/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:21:23 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:21:51 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_char(char c)
{
	ft_putchar_fd(c, STDOUT);
	return (1);
}

int	print_string(char *str)
{
	if (!str)
		return (0);
	ft_putstr_fd(str, STDOUT);
	return (ft_strlen(str));
}
