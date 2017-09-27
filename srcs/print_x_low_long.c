/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 09:02:26 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_low_ter_long(int *str, long long arg, int len, int bn)
{
	char	*ret;

	ret = ft_itoa_base_long(arg, 16);
	bn = ft_strlen(ret);
	if (str[0] == -1)
	{
		len = str[1] - bn;
		while (len-- > 0)
		{
			write(1, " ", 1);
			++bn;
		}
	}
	if (str[0] == '#')
	{
		ft_putstr("0x");
		bn = bn + 2;
	}
	ft_putstr(ret);
	if (str[0] == '-')
		return (write_m(str, bn, ret));
	//free(ret); leaks donc a corriger
	return (bn);
}

int		print_x_low_bis_long(int *str, long long arg, int len, int bn)
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
	}
	return (bn);
}

int		print_x_low_long(va_list ap, int *str)
{
	long long	arg;
	int			bn;
	int			len;

	arg = va_arg(ap, long long);
	if (arg < 0)
		arg = arg * -1;
	bn = 0;
	len = arg;
	if (arg == 0)
		bn = 1;
	len = bn;
	if (str[0] != '-')
		bn = print_x_low_bis_long(str, arg, len, bn);
	bn = print_x_low_ter_long(str, arg, len, bn);
	return (bn);
}
