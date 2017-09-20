/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:29:40 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/20 09:31:32 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		print_c_low(va_list ap, int *str);
int		print_s_low(va_list ap, int *str);
int		print_i_low_ter(int *str, long arg, int len, int bn);
int		print_i_low_bis(int *str, long arg, int len, int bn);
int		print_i_low(va_list ap, int *str);
int		print_d_low_ter(int *str, long arg, int len, int bn);
int		print_d_low_bis(int *str, long arg, int len, int bn);
int		print_d_low(va_list ap, int *str);
int		print_d_up(va_list ap, int *str);
int		print_d_up_bis(int *str, long arg, int len, int bn);
int		print_d_up_ter(int *str, long arg, int len, int bn);
int		check_conv_bis(const char *format, va_list ap, int *i, int *str);
int		check_conv(const char *format, va_list ap, int *i, int *str);
void	find_numb(const char *format, int *i, int *str, int n);
int		check_flag(const char *format, va_list ap, int *i, int *str);
#endif
