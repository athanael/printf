/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/10 09:23:06 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_up_ter_long(int *str, unsigned long long arg, int len, int bn)
{
	if (str[0] == -1)
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	bn += ft_putlong_x_up(arg);
	len = str[1] - bn;
	if (str[5] == '-')
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_up_bis_long(int *str, int len, int bn)
{
	len = str[1] - bn;
	if (len < 1 && str[7] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
	while (len > 0)
	{
		len = len - 1;
		if (str[4] == '0')
			write(1, &str[4], 1);
	}
	return (bn);
}

int		print_x_up_long(va_list ap, int *str)
{
	unsigned long long	arg;
	int					bn;
	int					len;

	arg = va_arg(ap, unsigned long long);
	bn = 0;
	len = 0;
	if (str[5] != '-')
		bn = print_x_up_bis_long(str, len, bn);
	bn = print_x_up_ter_long(str, arg, len, bn);
	return (bn);
}
