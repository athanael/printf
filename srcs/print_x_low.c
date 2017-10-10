/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:14:08 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/10 13:43:33 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parcer_x_low(va_list ap, int *str)
{
	if (str[3] == 'l' || str[3] == 'z')
		return (print_x_low_long(ap, str));
	if (str[3] == 'L')
		return (print_x_low_long_long(ap, str));
	if (str[3] == 'j')
		return (print_x_low_unitmax(ap, str));
	if (str[3] == 'H')
		return (print_x_low_h_h(ap, str));
	if (str[3] == 'h')
	{
		str[3] = -1;
		return (print_x_low(ap, str));
	}
	return (0);
}

int		print_x_low_ter(int *str, unsigned int arg, int len, int bn)
{
	if (str[8] == '#' && arg != 0)
	{
		write(1, "0x", 2);
		bn += 2;
	}
	if (str[4] == '0' && str[5] != '-')
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	bn += ft_putlong_x_low(arg);
	len = str[1] - bn;
	if (str[5] == '-')
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_low_bis(int *str, unsigned int arg, int len, int bn)
{
	if (len < 1 && str[7] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[0] == -1 || str[7] == ' ' || (str[8] == '#' && str[4] != '0'))
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_low(va_list ap, int *str)
{
	unsigned int	arg;
	int				bn;
	int				size;

	if (str[3] != -1)
		return (parcer_x_low(ap, str));
	bn = 0;
	arg = va_arg(ap, unsigned int);
	if (arg == 0 && str[2] == 0)
		return (write_space_s(str, 0, 0));
	size = ft_putlong_x_low_wp(arg);
	if (str[8] == '#' && arg != 0)
		size += 2;
	if (str[5] != '-')
		bn = print_x_low_bis(str, arg, str[1] - size, bn);
	bn = print_x_low_ter(str, arg, str[1] - size, bn);
	return (bn);
}
