/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:13:09 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/11 13:24:17 by phanna           ###   ########.fr       */
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

int		preci_d_low(int *str, int arg)
{
	int		len;
	int		bn;

	if (str[2] == 0 && arg == 0)
		return (0);
	bn = 0;
	if (arg == -2147483648)
	{
		bn = write_min(str, bn);
		return (bn);
	}
	len = arg;
	while (len != 0)
	{
		bn++;
		len /= 10;
	}
	arg == 0 ? bn = 1 : 0;
	len = 0;
	arg < 0 ? ft_putchar('-') : 0;
	arg < 0 ? arg *= -1 : 0;
	while (str[2] - len++ > bn)
		ft_putchar('0');
	ft_putnbr(arg);
	return (len - 1);
}

int		print_d_low_ter(int *str, int arg, int len, int bn)
{
	if (str[6] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (str[4] == '0' && str[5] != '-' && str[2] == -1)
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	if (str[4] == '0' && str[5] != '-' && arg < 0)
		arg *= -1;
	if (str[4] == '0' && str[2] == -1)
		ft_putnbr(arg);
	else
		bn += preci_d_low(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_d_low_bis(int *str, int arg, int len, int bn)
{
	if (str[5] != '-')
	{
		if (len < 1 && str[7] == ' ' && str[6] != '+' && arg >= 0)
		{
			write(1, " ", 1);
			++bn;
		}
		if (str[4] != '0' || (str[4] == '0' && str[2] != -1))
			while (len-- > 0 && ++bn)
				write(1, " ", 1);
		if (str[4] == '0' && arg < 0)
			write(1, "-", 1);
	}
	return (print_d_low_ter(str, arg, len, bn));
}

int		print_d_low(va_list ap, int *str)
{
	int		arg;
	int		bn;
	int		len;

	if (str[3] != -1)
		return (parser_d(ap, str));
	arg = va_arg(ap, int);
	bn = 1;
	len = arg;
	while (len / 10 != 0 && ++bn)
		len /= 10;
	if (arg == 0 && str[2] == 0)
		bn = 0;
	len = str[1] - bn;
	if (str[2] > bn)
		len = str[1] - str[2];
	if (arg < 0)
		++bn;
	if (arg < 0)
		--len;
	if (str[6] == '+' && arg >= 0)
		--len;
	return (print_d_low_bis(str, arg, len, bn));
}
