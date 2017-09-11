/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_option.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:12:00 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/11 16:50:24 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../include/ft_printf.h>

int	flag_hash(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '#'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, '#'));
	return (check_conv(format, ap, i, "#"));
}

int	flag_zero(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '0'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, '0'));
	return (check_conv(format, ap, i, "0"));
}

int	flag_minus(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '-'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, '-'));
	return (check_conv(format, ap, i, "-"));
}

int	flag_plus(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '+'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, '+'));
	return (check_conv(format, ap, i, "+"));
}

int	flag_space(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, ' '));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, ' '));
	return (check_conv(format, ap, i, " "));
}
