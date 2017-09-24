/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:29:40 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/21 18:20:20 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../Libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putlong(long nb);
int		aff_wchar_t(char *bin, int bn);
char	*one_byte(char *bin, int len);
char	*two_byte(char *bin, int len);
char	*three_byte(char *bin, int len);
char	*four_byte(char *bin, int len);
int		pfudor(unsigned int arg, int *str);
int		print_c_up(va_list ap, int *str);
int		print_c_low(va_list ap, int *str);
int		print_s_low(va_list ap, int *str);
int		print_s_up(va_list ap, int *str);
int		print_p_low(va_list ap, int *str);
int		print_i_low_ter(int *str, long arg, int len, int bn);
int		print_i_low_bis(int *str, long arg, int len, int bn);
int		print_i_low(va_list ap, int *str);
int		print_d_low_ter(int *str, long arg, int len, int bn);
int		print_d_low_bis(int *str, long arg, int len, int bn);
int		print_d_low(va_list ap, int *str);
int		print_d_up(va_list ap, int *str);
int		print_d_up_bis(int *str, long arg, int len, int bn);
int		print_d_up_ter(int *str, long arg, int len, int bn);
int		print_u_low(va_list ap, int *str);
int		print_u_low_bis(int *str, unsigned int arg, int len, int bn);
int		print_u_low_ter(int *str, unsigned int arg, int len, int bn);
int		print_u_up(va_list ap, int *str);
int		print_u_up_bis(int *str, unsigned int arg, int len, int bn);
int		print_u_up_ter(int *str, unsigned int arg, int len, int bn);
int		check_conv_bis(const char *format, va_list ap, int *i, int *str);
int		check_conv(const char *format, va_list ap, int *i, int *str);
void	find_numb(const char *format, int *i, int *str, int n);
int		check_flag(const char *format, va_list ap, int *i, int *str);
#endif
