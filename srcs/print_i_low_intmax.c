/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:08:34 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/02 17:25:00 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_i_low_intmax_ter(int *str, int arg, int len, int bn)
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

int		print_i_low_intmax_bis(int *str, int arg, int len, int bn)
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

int		print_i_low_intmax(va_list ap, int *str)
{
	intmax_t	arg;
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
		bn = print_i_low_intmax_bis(str, arg, len, bn);
	bn = print_i_low_intmax_ter(str, arg, len, bn);
	return (bn);
}
