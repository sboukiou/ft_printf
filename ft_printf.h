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

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

#define FLAGS "-0.# +"
#define TYPES "cspdiuxX%"
#define STDOUT 1

typedef enum format
{
	HEX,
	INT,
	DECIM,
	ADDR,
} t_format;

typedef	struct	flags
{
	t_format type;
	int	space;
	int	hash;
	int	plus;
	int	zero;
	int	width;
	int prec;
	int point;
	int minus;
}t_flags;

// Flags handlers

int	ft_putnbr_fld(int n, int fd);
int	print_string(char *str);
int	print_char(char c);
int	print_int(int number, t_flags *flags);
int	ft_printf(const char *buffer, ...);
t_flags	*get_flags(char *buffer);
int	is_set(char c, char *str);
int	call_printer(char *buffer, va_list args_list);
int	get_num_len(int number);

#endif
