/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/02 15:46:06 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_up_ter(int *str, unsigned int arg, int len, int bn)
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
	bn += ft_putnbr_X(arg);
	if (str[5] == '-')
		while(len-- > bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_up_bis(int *str, unsigned int arg, int len, int bn)
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

int		print_x_up(va_list ap, int *str)
{
	unsigned int			arg;
	int						bn;
	int						len;

	if (str[3] == 'l' || str[3] == 'L')
		return (print_x_up_long(ap, str));
	arg = va_arg(ap, unsigned int);
	bn = 0;
	if (str[5] != '-')
		bn = print_x_up_bis(str, arg, len, bn);
	bn = print_x_up_ter(str, arg, len, bn);
	return (bn);
}
