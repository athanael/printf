/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_low_short.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 15:07:59 by phanna            #+#    #+#             */
/*   Updated: 2017/10/03 16:06:15 by phanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

int		print_i_low_short_ter(int *str, short arg, int len, int bn)
{
	if (str[0] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (str[0] == '0' && arg < 0)
		arg *= -1;
	ft_putnbr(arg);
	if (str[0] == '-')
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

int		print_i_low_short_bis(int *str, short arg, int len, int bn)
{
	if (len < 1 && str[0] == ' ' && arg >= 0)
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[0] == '0' && arg < 0)
		write(1, "-", 1);
	while (len > 0)
	{
		len = len - 1;
		if (str[0] == '0')
			write(1, &str[0], 1);
		else
			write(1, " ", 1);
		++bn;
	}
	return (bn);
}

int		print_i_low_short(va_list ap, int *str)
{
	short	arg;
	int		bn;
	int		len;

	arg = va_arg(ap, int);
	bn = 0;
	len = arg;
	if (len < 0)
		++bn;
	while (len != 0 && ++bn)
		len /= 10;
	if (arg == 0)
		bn = 1;
	len = str[1] - bn;
	if (str[0] == '+' && arg >= 0)
		--len;
	if (str[0] != '-')
		bn = print_i_low_short_bis(str, arg, len, bn);
	bn = print_i_low_short_ter(str, arg, len, bn);
	return (bn);
}
