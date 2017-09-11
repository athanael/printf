/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:34:41 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/11 16:50:23 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../include/ft_printf.h>

int     check_flag(const char *format, va_list ap, int *i);
{
	*i++;
	if (format[*i] == '#')
		return (flag_hash(format, ap, i));
	if (format[*i] == '0')
		return (flag_zero(format, ap, i));
	if (format[*i] == '-')
		return (flag_minus(format, ap, i));
	if (format[*i] == '+')
		return (flag_plus(format, ap, i));
	if (format[*i] == ' ')
		return (flag_space(format, ap, i));
	if (format[*i] == ' ')
		return (flag_space(format, ap, i));
	if (format[*i] == ' ')
		return (flag_space(format, ap, i));
	if (format[*i] == ' ')
		return (flag_space(format, ap, i));
	if (format[*i] == ' ')
		return (flag_space(format, ap, i));
	if (format[*i] == ' ')
		return (flag_space(format, ap, i));
}
