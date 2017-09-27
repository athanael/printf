/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 08:59:46 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_up_ter(int *str, int arg, int len, int bn)
{
	char	*ret;

	ret = ft_itoa_base_majuscule(arg, 16);
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
	if (str[0] == '-')
		return (write_m(str, bn, ret));
	if (str[0] == '#' && arg != 0)
	{
		ft_putstr("0X");
		bn = bn + 2;
	}
	ft_putstr(ret);
	//free(ret); leaks donc a corriger
	return (bn);
}

int		print_x_up_bis(int *str, int arg, int len, int bn)
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

int		print_x_up(va_list ap, int *str)
{
	int			arg;
	int			bn;
	int			len;

	if (str[3] == 108 || str[3] == 76)
		return (print_x_up_long(ap, str));
	arg = va_arg(ap, unsigned int);
	bn = 0;
	len = arg;
	if (arg == 0)
		bn = 1;
	len = bn;
	if (str[0] != '-')
		bn = print_x_up_bis(str, arg, len, bn);
	bn = print_x_up_ter(str, arg, len, bn);
	return (bn);
}
