/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:34:41 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/18 14:59:20 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	find_numb(const char *format, int *i, int *str, int n)
{
	if (n == 1 || n == 2)
	{
		str[n] = ft_atoi(format + *i);
		while (format[*i] >= '0' && format[*i] <= '9')
			*i = *i + 1;
	}
	else
	{
		str[n] = format[*i];
		*i = *i + 1;
	}
}

int		check_flag(const char *format, va_list ap, int *i, int *str)
{
	*i = *i + 1;
	if (format[*i] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	if (format[*i] == '#' || format[*i] == '0' || format[*i] == '-'
			|| format[*i] == '+' || format[*i] == ' ')
		find_numb(format, i, str, 0);
	if (format[*i] >= '0' && format[*i] <= '9')
		find_numb(format, i, str, 1);
	if (format[*i] == '.')
	{
		*i = *i + 1;
		find_numb(format, i, str, 2);
	}
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		find_numb(format, i, str, 3);
	if ((format[*i] == 'h' || format[*i] == 'l') && format[*i] == str[3])
	{
		*i = *i + 1;
		str[3] -= 32;
	}
	return (check_conv(format, ap, i, str));
}
