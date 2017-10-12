/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low_h_h.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 10:52:22 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/12 16:54:38 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_low_ter_h_h(int *str, unsigned char arg, int len, int bn)
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

int		print_x_low_bis_h_h(int *str, int len, int bn)
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

int		print_x_low_h_h(va_list ap, int *str)
{
	unsigned char	arg;
	int				bn;
	int				size;

	bn = 0;
	arg = va_arg(ap, unsigned int);
	if (arg == 0 && str[2] == 0)
		return (write_space_s(str, 0, 0));
	size = ft_putlong_x_low_wp(arg);
	if (str[8] == '#' && arg != 0)
		size += 2;
	if (str[5] != '-')
		bn = print_x_low_bis_h_h(str, str[1] - size, bn);
	bn = print_x_low_ter_h_h(str, arg, str[1] - size, bn);
	return (bn);
}
