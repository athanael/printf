/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_option.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:12:00 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 16:25:49 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_hash(const char *format, va_list ap, int *i, int *str)
{
	*i++;
	str[0] = '#';
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, str));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, str));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, str));
	return (check_conv(format, ap, i, str));
}

int	flag_zero(const char *format, va_list ap, int *i)
{	
	*i++;
	str[0] = '0';
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, str));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, str));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, str));
	return (check_conv(format, ap, i, str));
}

int	flag_minus(const char *format, va_list ap, int *i)
{	
	*i++;
	str[0] = '-';
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, str));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, str));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, str));
	return (check_conv(format, ap, i, str));
}

int	flag_plus(const char *format, va_list ap, int *i)
{	
	*i++;
	str[0] = '+';
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, str));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, str));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, str));
	return (check_conv(format, ap, i, str));
}

int	flag_space(const char *format, va_list ap, int *i)
{	
	*i++;
	str[0] = ' ';
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, str));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, str));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, str));
	return (check_conv(format, ap, i, str));
}
