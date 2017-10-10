/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_up_h_h.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 11:04:32 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/10 11:05:56 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_up_ter_h_h(int *str, unsigned char arg, int len, int bn)
{
	len = str[1] - bn;
	if (str[0] == -1)
	{
		while (len-- > 0)
		{
			write(1, " ", 1);
			++bn;
		}
	}
	if (str[8] == '#' && arg != 0)
	{
		ft_putstr("0X");
		bn = bn + 2;
	}
	bn += ft_putnbr_x_up(arg);
	if (str[5] == '-')
		while (len-- > bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_up_bis_h_h(int *str, unsigned char arg, int len, int bn)
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

int		print_x_up_h_h(va_list ap, int *str)
{
	unsigned char			arg;
	int						bn;
	int						len;

	arg = va_arg(ap, unsigned int);
	bn = 0;
	if (str[5] != '-')
		bn = print_x_up_bis_h_h(str, arg, len, bn);
	bn = print_x_up_ter_h_h(str, arg, len, bn);
	return (bn);
}
