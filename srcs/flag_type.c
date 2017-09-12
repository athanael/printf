/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:59:32 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 14:42:46 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_type(const char *format, va_list ap, int *i, char *str)
{
	*i++;
	if (format[*i - 1] == 'h' && format[*i] == 'h')
		return (check_conv(format[++*i], ap, str, "hh");
	if (format[*i - 1] == 'h')
		return (check_conv(format[*i], ap, str, "h");
	if (format[*i - 1] == 'l' && format[*i] == 'l')
		return (check_conv(format[++*i], ap, str, "ll");
	if (format[*i - 1] == 'l')
		return (check_conv(format[*i], ap, str, "l");
	if (format[*i - 1] == 'j')
		return (check_conv(format[*i], ap, str, "j");
	return (check_conv(format[*i], ap, str, "z");
	
}
