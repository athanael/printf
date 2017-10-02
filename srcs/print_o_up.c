/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/02 11:17:09 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_o_up_ter(int *str, unsigned long arg, int len, int bn)
{
	bn += ft_putnbr_octal(arg);
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

int		print_o_up_bis(int *str, unsigned long arg, int len, int bn)
{
	if (len < 1 && str[7] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
	while (len > 0)
	{
		len = len - 1;
		if (str[0] == '0')
			write(1, &str[7], 1);
	}
	return (bn);
}

int		print_o_up(va_list ap, int *str)
{
	unsigned long	arg;
	int				bn;
	int				len;

	arg = va_arg(ap, unsigned long);
	bn = 0;
	len = arg;
	if (str[5] != '-')
		bn = print_o_up_bis(str, arg, len, bn);
	bn = print_o_up_ter(str, arg, len, bn);
	return (bn);
}
