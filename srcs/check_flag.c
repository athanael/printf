/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:34:41 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 16:27:46 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int     check_flag(const char *format, va_list ap, int *i, int *str);
{
	*i++;
	if (format[*i] == '#' || format[*i] == '0' || format[*i] == '-'
			|| format[*i] == '+' || format[*i] == ' ')
		str[0] = format[*i++];
	if (format[*i] >= '0' && format[*i] <= '9')
		return (flag_length(format, ap, i, 'n'));
	if (format[*i] == '.')
		return (flag_deci(format, ap, i, 'n'));
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, " 0"));
	return (check_conv(format, ap, i, "n0"));
}
