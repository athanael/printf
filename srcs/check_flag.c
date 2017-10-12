/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:34:41 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/12 15:24:41 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	fourth_flag(const char *format, int *i, int *str)
{
	if (format[*i] != 'h' && (str[3] == 'h' || str[3] == 'H'))
		str[3] = 'L';
	if (str[3] == -1)
		find_numb(format, i, str, 3);
	*i = *i + 1;
	if ((format[*i] == 'h' || format[*i] == 'l') && format[*i] == str[3])
	{
		str[3] -= 32;
		*i = *i + 1;
	}
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		fourth_flag(format, i, str);
}

void	first_flags(const char *format, int *i, int *str)
{
	while (format[*i] == '#' || format[*i] == '0' || format[*i] == '-'
			|| format[*i] == '+' || format[*i] == ' ')
	{
		if (format[*i] == '0')
			str[4] = format[*i];
		if (format[*i] == '-')
			str[5] = format[*i];
		if (format[*i] == '+')
			str[6] = format[*i];
		if (format[*i] == ' ')
			str[7] = format[*i];
		if (format[*i] == '#')
			str[8] = format[*i];
		*i = *i + 1;
	}
}

void	find_numb(const char *format, int *i, int *str, int n)
{
	if (n == 1 || n == 2)
	{
		str[n] = ft_atoi(format + *i);
		while (format[*i] >= '0' && format[*i] <= '9')
			*i = *i + 1;
	}
	else
		str[n] = format[*i];
}

int		check_flag(const char *format, va_list ap, int *i, int *str)
{
	*i = *i + 1;
	if (format[*i] == '#' || format[*i] == '0' || format[*i] == '-'
			|| format[*i] == '+' || format[*i] == ' ')
	{
		first_flags(format, i, str);
		str[0] = 1;
	}
	if (format[*i] >= '0' && format[*i] <= '9')
		find_numb(format, i, str, 1);
	while (format[*i] == '.')
	{
		*i = *i + 1;
		find_numb(format, i, str, 2);
	}
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		fourth_flag(format, i, str);
	if (format[*i] == '#' || format[*i] == '0' || format[*i] == '-'
			|| format[*i] == '+' || format[*i] == ' ')
	{
		first_flags(format, i, str);
		str[0] = 1;
	}
	return (check_conv(format, ap, i, str));
}
