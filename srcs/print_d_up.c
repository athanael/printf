/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:30:07 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/21 10:18:31 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_d_up_ter(int *str, long arg, int len, int bn)
{
	if (str[0] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (str[0] == '0' && arg < 0)
		arg *= -1;
	ft_putlong(arg);
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

int		print_d_up_bis(int *str, long arg, int len, int bn)
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

int		print_d_up(va_list ap, int *str)
{
	int		arg;
	int		bn;
	int		len;

	arg = va_arg(ap, long);
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
	if (str[0] == '+' && arg >= 0)
		--len;
	if (str[0] != '-')
		bn = print_d_up_bis(str, arg, len, bn);
	bn = print_d_up_ter(str, arg, len, bn);
	return (bn);
}