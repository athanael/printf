/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:14:09 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/25 13:08:54 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		check_conv_bis(const char *format, va_list ap, int *i, int *str)
{
	if (format[*i - 1] == 'u')
		return (print_u_low(ap, str));
	if (format[*i - 1] == 'U')
		return (print_u_up(ap, str));
	if (format[*i - 1] == 'x')
		return (print_x_low(ap, str));
	if (format[*i - 1] == 'X')
		return (print_x_up(ap, str));
	if (format[*i - 1] == 'c')
		return (print_c_low(ap, str));
	if (format[*i - 1] == 'C')
		return (print_c_up(ap, str));
	if (format[*i - 1] == '%')
		return (print_modulo(str));
	if (format[*i - 1] == 's')
		return (print_s_low(ap, str));
	return (-1);
}

int		check_conv(const char *format, va_list ap, int *i, int *str)
{
	*i = *i + 1;
	if (format[*i - 1] == ' ')
	{
		while (format[*i - 1] == ' ')
			*i = *i + 1;
	}
	if (format[*i - 1] == 'S')
		return (print_s_up(ap, str));
	if (format[*i - 1] == 'p')
		return (print_p_low(ap, str));
	if (format[*i - 1] == 'd')
		return (print_d_low(ap, str));
	if (format[*i - 1] == 'D')
		return (print_d_up(ap, str));
	if (format[*i - 1] == 'i')
		return (print_i_low(ap, str));
	if (format[*i - 1] == 'o')
		return (print_o_low(ap, str));
	if (format[*i - 1] == 'O')
		return (print_o_up(ap, str));
	return (check_conv_bis(format, ap, i, str));
}
