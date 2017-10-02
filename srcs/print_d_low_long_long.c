/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low_long_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:12:01 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/02 16:50:32 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_d_low_long_long_ter(int *str, long long arg, int len, int bn)
{
	if (str[6] == '+' && arg >= 0 && ++bn)
		write(1, "+", 1);
	if (str[4] == '0' && str[5] != '-')
		while (len-- > 0)
			write(1, "0", 1);
	if (str[4] == '0' && str[5] != '-' && arg < 0)
		arg *= -1;
	ft_putlong_long(arg);
	len = str[1] - bn;
	if (str[5] == '-')
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	return (bn);
}

int		print_d_low_long_long_bis(int *str, long long arg, int len, int bn)
{
	if (len < 1 && str[7] == ' ' && str[6] != '+' && arg >= 0 && ++bn)
		write(1, " ", 1);
	if (str[4] != '0')
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	if (arg < 0)
		write(1, "-", 1);
	return (bn);
}

int		print_d_low_long_long(va_list ap, int *str)
{
	long long	arg;
	long long	nbr;
	int			len;
	int			bn;

	arg = va_arg(ap, long long);
	bn = 0;
	nbr = arg;
	if (nbr < 0)
		++bn;
	while (nbr != 0 && ++bn)
		nbr /= 10;
	if (arg == 0)
		bn = 1;
	len = str[1] - bn;
	if (str[6] == '+' && arg >= 0)
		--len;
	if (str[5] != '-')
		bn = print_d_low_long_long_bis(str, arg, len, bn);
	bn = print_d_low_long_long_ter(str, arg, len, bn);
	return (bn);
}
