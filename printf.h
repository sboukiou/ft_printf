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

#define FLAGS "-0.# +"
#define TYPES "cspdiuxX%"

#include <stdarg.h>

int	ft_printf(const char *buffer, ...);
char *_gettypename(char type);

#endif
