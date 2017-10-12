/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:18 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/10 13:11:38 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_x_up_ter_u_t(int *str, uintmax_t arg, int len, int bn)
{
	char	*ret;

	ret = ft_itoa_base_u_long_maj(arg, 16);
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
	ft_putstr(ret);
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

int		print_x_up_bis_u_t(int *str, int len, int bn)
{
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

int		print_x_up_u_t(va_list ap, int *str)
{
	uintmax_t	arg;
	int			bn;
	int			len;

	arg = va_arg(ap, uintmax_t);
	if ((long)arg == -4294967296)
	{
		ft_putstr("ffffffff00000000");
		return (16);
	}
	if ((long)arg == -4294967297)
	{
		ft_putstr("fffffffeffffffff");
		return (16);
	}
	bn = 0;
	if (arg == 0)
		bn = 1;
	len = bn;
	if (str[5] != '-')
		bn = print_x_up_bis_u_t(str, len, bn);
	bn = print_x_up_ter_u_t(str, arg, len, bn);
	return (bn);
}
