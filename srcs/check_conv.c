/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:14:09 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/18 14:12:35 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//int		check_conv_bis(const char *format, va_list ap, int *i, int *str)
//{
//	if (format[*i - 1] == 'u')
//		return (flag_u(ap, str));
//	if (format[*i - 1] == 'U')
//		return (flag_U(ap, str));
//	if (format[*i - 1] == 'x')
//		return (flag_x(ap, str));
//	if (format[*i - 1] == 'X')
//		return (flag_X(ap, str));
//	if (format[*i - 1] == 'c')
//		return (flag_c(ap, str));
//	if (format[*i - 1] == 'C')
//		return (flag_C(ap, str));
//	return (-1);
//}

int		check_conv(const char *format, va_list ap, int *i, int *str)
{
	*i = *i + 1;
//	if (format[*i - 1] == 's')
//		return (flag_s(ap, str));
//	if (format[*i - 1] == 'S')
//		return (flag_S(ap, str));
//	if (format[*i - 1] == 'p')
//		return (flag_p(ap, str));
	if (format[*i - 1] == 'd')
		return (print_d(ap, str));
//	if (format[*i - 1] == 'D')
//		return (flag_D(ap, str));
//	if (format[*i - 1] == 'i')
//		return (flag_i(ap, str));
//	if (format[*i - 1] == 'o')
//		return (flag_o(ap, str));
//	if (format[*i - 1] == 'O')
//		return (flag_O(ap, str));
//	return (check_conv_bis(format, ap, i, str));
	return (-1);
}
