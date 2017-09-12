/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:14:09 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 17:24:24 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_prntf.h"

int		check_conv_bis(const char *format, va_list ap, int *i, int *str)
{
	if (format[*i] == 'u')
		return (flag_u(ap, str, type));
	if (format[*i] == 'U')
		return (flag_U(ap, str, type));
	if (format[*i] == 'x')
		return (flag_x(ap, str, type));
	if (format[*i] == 'X')
		return (flag_X(ap, str, type));
	if (format[*i] == 'c')
		return (flag_c(ap, str, type));
	if (format[*i] == 'C')
		return (flag_C(ap, str, type));
	return (-1);
}

int		check_conv(const char *format, va_list ap, int *i, int *str)
{
	if (format[*i] == 's')
		return (flag_s(ap, str, type));
	if (format[*i] == 'S')
		return (flag_S(ap, str, type));
	if (format[*i] == 'p')
		return (flag_p(ap, str, type));
	if (format[*i] == 'd')
		return (flag_d(ap, str, type));
	if (format[*i] == 'D')
		return (flag_D(ap, str, type));
	if (format[*i] == 'i')
		return (flag_i(ap, str, type));
	if (format[*i] == 'o')
		return (flag_o(ap, str, type));
	if (format[*i] == 'O')
		return (flag_O(ap, str, type));
	return (check_conv_bis(format, ap, i, str));
}
