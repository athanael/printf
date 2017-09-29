/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low_long_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:12:15 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 14:13:02 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		preci_d_low_long(int *str, long arg)
{
	long	nbr;
	int		len;
	int		bn;

	if (str[2] == 0 && arg == 0)
		return (0);
	bn = 0;
	if (arg == -2147483648)
	{
		ft_putchar('-');
		while (str[2] - bn++ > 10)
			ft_putchar('0');
		ft_putstr("2147483648");
		return (bn - 1);
	}
	nbr = arg;
	while (nbr / 10 != 0 && ++bn)
		nbr /= 10;
	if (arg == 0)
		bn = 1;
	len = 0;
	if (arg < 0)
		ft_putchar('-');
	if (arg < 0)
		arg *= -1;
	while (str[2] - len++ > bn)
		ft_putchar('0');
	ft_putlong(arg);
	return (len - 1);
}

int		print_d_low_long_ter(int *str, long arg, int len, int bn)
{
	if (str[6] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (str[4] == '0' && str[5] != '-' && str[2] == -1)
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	if (str[4] == '0' && str[5] != '-' && arg < 0)
		arg *= -1;
	if (str[4] == '0' && str[2] == -1)
		ft_putlong(arg);
	else
		bn += preci_d_low_long(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_d_low_long_bis(int *str, long arg, int len, int bn)
{
	if (str[5] != '-')
	{
		if (len < 1 && str[7] == ' ' && str[6] != '+' && arg >= 0)
		{
			write(1, " ", 1);
			++bn;
		}
		if (str[4] != '0' || (str[4] == '0' && str[2] != -1))
			while (len-- > 0 && ++bn)
				write(1, " ", 1);
		if (str[4] == '0' && arg < 0)
			write(1, "-", 1);
	}
	return (print_d_low_long_ter(str, arg, len, bn));
}

int		print_d_low_long(va_list ap, int *str)
{
	long	arg;
	long	nbr;
	int		bn;
	int		len;

	arg = va_arg(ap, long);
	bn = 1;
	nbr = arg;
	while (nbr / 10 != 0 && ++bn)
		nbr /= 10;
	if (arg == 0 && str[2] == 0)
		bn = 0;
	len = str[1] - bn;
	if (str[2] > bn)
		len = str[1] - str[2];
	if (arg < 0)
		++bn;
	if (arg < 0)
		--len;
	if (str[6] == '+' && arg >= 0)
		--len;
	return (print_d_low_long_bis(str, arg, len, bn));
}
