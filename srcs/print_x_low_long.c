/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 13:45:55 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/02 14:10:43 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_low_ter_long(int *str, unsigned long long arg, int len, int bn)
{
	if (str[0] == -1)
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	bn += ft_putlong_long_x_low(arg);
	len = str[1] - bn;
	if (str[5] == '-')
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_low_bis_long(int *str, unsigned long long arg, int len, int bn)
{
	len = str[1] - bn;
	if (len < 1 && str[7] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[4] == '0')
		while (len-- > 0)
			write(1, &str[4], 1);
	return (bn);
}

int		print_x_low_long(va_list ap, int *str)
{
	unsigned long long	arg;
	int					bn;
	int					len;

	arg = va_arg(ap, unsigned long long);
	bn = 0;
	len = 0;
	if (str[5] != '-')
		bn = print_x_low_bis_long(str, arg, len, bn);
	bn = print_x_low_ter_long(str, arg, len, bn);
	return (bn);
}
