/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:29:40 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/18 13:45:39 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		print_d(va_list ap, int *str);
int		check_conv(const char *format, va_list ap, int *i, int *str);
void	find_numb(const char *format, int *i, int *str, int n);
int		check_flag(const char *format, va_list ap, int *i, int *str);
#endif
