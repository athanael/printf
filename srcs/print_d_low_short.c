/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low_short.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:25:37 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 18:25:40 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_d_low_short_ter(int *str, short arg, int len, int bn)
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
	ft_putshort(arg);
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

int		print_d_low_short_bis(int *str, short arg, int len, int bn)
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

int		print_d_low_short(va_list ap, int *str)
{
	short	arg;
	int		bn;
	int		len;

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
		bn = print_d_low_short_bis(str, arg, len, bn);
	bn = print_d_low_short_ter(str, arg, len, bn);
	return (bn);
}
