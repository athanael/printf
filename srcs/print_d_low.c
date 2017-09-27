/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:13:09 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 18:23:10 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parser_d(va_list ap, int *str)
{
	if (str[3] == 'h')
		return (print_d_low_short(ap, str));
	if (str[3] == 'H')
		return (print_d_low_signed_char(ap, str));
	if (str[3] == 'l')
		return (print_d_low_long(ap, str));
	if (str[3] == 'L')
		return (print_d_low_long_long(ap, str));
	if (str[3] == 'j')
		return (print_d_low_intmax_t(ap, str));
	if (str[3] == 'z')
		return (print_d_low_ssize_t(ap, str));
	return (0);
}

int		print_d_low_ter(int *str, long arg, int len, int bn)
{
	if (str[6] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (str[4] == '0' && str[5] != '-')
		while (len-- > 0)
			write(1, "0", 1);
	if (str[4] == '0' && str[5] != '-' && arg < 0)
		arg *= -1;
	ft_putnbr(arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0)
		{
			write(1, " ", 1);
			++bn;
		}
	}
	return (bn);
}

int		print_d_low_bis(int *str, long arg, int len, int bn)
{
	if (len < 1 && str[7] == ' ' && str[6] != '+' && arg >= 0)
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[4] == '0' && arg < 0)
		write(1, "-", 1);
	while (len > 0)
	{
		len--;
		if (str[4] != '0')
			write(1, " ", 1);
		++bn;
	}
	return (bn);
}

int		print_d_low(va_list ap, int *str)
{
	int		arg;
	int		bn;
	int		len;

	if (str[3] != -1)
		return (parser_d(ap, str));
	arg = va_arg(ap, int);
	bn = 0;
	len = arg;
	if (len < 0)
		++bn;
	while (len != 0)
	{
		bn++;
		len /= 10;
	}
	if (arg == 0)
		bn = 1;
	len = str[1] - bn;
	if (str[6] == '+' && arg >= 0)
		--len;
	if (str[5] != '-')
		bn = print_d_low_bis(str, arg, len, bn);
	bn = print_d_low_ter(str, arg, len, bn);
	return (bn);
}
