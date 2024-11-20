/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:20:42 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/14 18:15:25 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define FLAGS "-0.# +"
# define TYPES "cspdiuxX%"
#define OPS_COUNT 8
#define HEX_BASE "123456789abcdef"

/*Printers*/
void	ft_putnbr(int	number);
void	ft_print_hex(size_t	number);
void	print_char(char c);
void	print_string(char *string);
void	print_integer(int	num);

int		ft_printf(const char *buffer, ...);
void	call_printer(char identifier, va_list arguments);
#endif
