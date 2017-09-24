/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:03:47 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/18 16:07:13 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_u_low_ter(int *str, unsigned int  arg, int len, int bn)
{
	if (str[0] == '+' && arg)
	{
		write(1, "+", 1);
		++bn;
	}
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

int		print_u_low_bis(int *str, unsigned int arg, int len, int bn)
{
	if (len < 1 && str[0] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
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

int		print_u_low(va_list ap, int *str)
{
	int		arg;
	int		bn;
	int		len;

	arg = va_arg(ap, unsigned int);
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
	if (str[0] != '-')
		bn = print_u_low_bis(str, arg, len, bn);
	bn = print_u_low_ter(str, arg, len, bn);
	return (bn);
}
