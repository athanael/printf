/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:08:34 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/10 11:29:28 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_i_low_intmax_ter(int *str, intmax_t arg, int len, int bn)
{
	if (str[0] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (str[0] == '0' && arg < 0)
		arg *= -1;
	ft_putintmax_t(arg);
	if (str[0] == '-')
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

int		print_i_low_intmax_bis(int *str, intmax_t arg, int len, int bn)
{
	if (len < 1 && str[0] == ' ' && arg >= 0)
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[0] == '0' && arg < 0)
		write(1, "-", 1);
	while (len > 0)
	{
		len = len - 1;
		if (str[0] == '0')
			write(1, &str[0], 1);
		else
			write(1, " ", 1);
		++bn;
	}
	return (print_i_low_intmax_ter(str, arg, len, bn));
}

int		print_i_low_intmax(va_list ap, int *str)
{
	intmax_t	arg;
	intmax_t	nbr;
	int			bn;
	int			len;

	arg = va_arg(ap, intmax_t);
	bn = 1;
	nbr = arg;
	if (len < 0)
		++bn;
	while (nbr / 10 != 0 && ++bn)
		nbr /= 10;
	if (arg == 0 && str[2] == 0)
		bn = 0;
	len = str[1] - bn;
	return (print_i_low_intmax_bis(str, arg, len, bn));
}
