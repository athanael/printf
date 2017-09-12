/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:29:40 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 08:30:40 by phanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	check_flag(const char *format, va_list ap, int *i);
int	flag_hash(const char *format, va_list ap, int *i)
int	flag_zero(const char *format, va_list ap, int *i)
int	flag_minus(const char *format, va_list ap, int *i)
int	flag_plus(const char *format, va_list ap, int *i)
int	flag_space(const char *format, va_list ap, int *i)
int	flag_length(const char *format, va_list ap, int *i, char c)
#endif
