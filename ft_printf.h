/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:20:42 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/28 14:29:25 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define FLAGS "-0# +"
# define TYPES "cspdiuxX%"
# define STDOUT 1
# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"

typedef enum type
{
	CHAR,
	STR,
	PTR,
	DECIM,
	INT,
	UNSI,
	HEX_L,
	HEX_U,
	PRCND,
	ERR,
}	t_type;

typedef struct tokens
{
	t_type	type;
	int		space;
	int		hash;
	int		plus;
	int		zero;
	int		width;
	int		prec;
	int		point;
	int		minus;
}	t_tokens;

/*Simple printers functions*/
int			ft_printf(const char *buffer, ...);
int			print_string(char *str);
int			print_char(char c);
int			print_zeros(int count);
int			print_spaces(int count);

/*Helper functiosn*/
t_tokens	*get_tokens(const char *buffer);
int			is_set(char c, char *str);
int			call_printer(t_tokens *tokens, va_list args_list);
int			get_num_len(long long number);
int			print_hex_large(unsigned long number, int hash);
int			print_large_numbers(long long number);
int			ft_min(int a, int b);
int			ft_max(int a, int b);
int			get_hex_len(unsigned long number, int hash);
int			print_large_unsigned(unsigned long number);
/* bonus printers */
int			print_char_bonus(char c, t_tokens *tokens);
int			print_string_bonus(char *string, t_tokens *tokens);
int			print_address_bonus(void	*address, t_tokens *tokens);
int			print_hex_u_bonus(unsigned int number, t_tokens *tokens);
int			print_hex_l_bonus(unsigned int number, t_tokens *tokens);
int			print_unsigned_bonus(unsigned long number, t_tokens *tokens);
int			print_integers_bonus(int number, t_tokens *tokens);

#endif
