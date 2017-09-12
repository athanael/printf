/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_option.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:12:00 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 14:50:06 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/ft_printf.h>

int	flag_hash(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '#'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, "#0"));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, "#0"));
	return (check_conv(format, ap, i, "#0"));
}

int	flag_zero(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '0'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, "00"));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, "00"));
	return (check_conv(format, ap, i, "00"));
}

int	flag_minus(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '-'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, "-0"));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
       		return (flag_type(format, ap, i, "-0"));
	return (check_conv(format, ap, i, "-0"));
}

int	flag_plus(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, '+'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, "+0"));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, "+0"));
	return (check_conv(format, ap, i, "+0"));
}

int	flag_space(const char *format, va_list ap, int *i)
{
	*i++;
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, ' '));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, " 0"));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, " 0"));
	return (check_conv(format, ap, i, " 0"));
}
