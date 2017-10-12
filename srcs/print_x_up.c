/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/12 14:17:53 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parcer_x_up(va_list ap, int *str)
{
	if (str[3] == 'l' || str[3] == 'L' || str[3] == 'z')
		return (print_x_up_long(ap, str));
	if (str[3] == 'h')
	{
		str[3] = -1;
		return (print_x_up(ap, str));
	}
	if (str[3] == 'H')
		return (print_x_up_h_h(ap, str));
	if (str[3] == 'j')
		return (print_x_up_u_t(ap, str));
	return (0);
}

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
	ft_putnbr_x_up(arg);
	if (str[5] == '-')
		while (len-- > bn)
			write(1, " ", 1);
	return (bn);
}

int		print_x_up_bis(int *str, unsigned int arg, int len, int bn)
{
	bn = ft_putnbr_x_up_wp(arg);
	len = str[1] - bn;
	if (len < 1 && str[7] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[4] == '0')
		while (len-- > 0 && bn++)
			write(1, &str[4], 1);
	return (bn);
}

int		print_x_up(va_list ap, int *str)
{
	unsigned int			arg;
	int						bn;
	int						len;
	int						bn2;

	if (str[3] != -1)
		return (parcer_x_up(ap, str));
	arg = va_arg(ap, unsigned int);
	bn = 0;
	if (str[5] != '-')
		bn = print_x_up_bis(str, arg, len, bn);
	bn = print_x_up_ter(str, arg, len, bn);
	return (bn);
}
