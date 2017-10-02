/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i_low_h_h.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:10:36 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/02 17:25:35 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_i_low_h_h_ter(int *str, char arg, int len, int bn)
{
	if (str[0] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	if (arg < 0)
		write(1, "-", 1);
	if (arg < 0)
		arg *= -1;
	ft_putascii(arg);
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

int		print_i_low_h_h_bis(int *str, char arg, int len, int bn)
{
	if (len < 1 && str[0] == ' ' && arg >= 0)
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[4] == '0' && arg < 0)
		write(1, "-", 1);
	while (len > 0)
	{
		len = len - 1;
		if (str[4] == '0')
			write(1, &str[4], 1);
		else
			write(1, " ", 1);
		++bn;
	}
	return (bn);
}

int		print_i_low_h_h(va_list ap, int *str)
{
	char		arg;
	int			bn;
	int			len;
	char		nbr;

	arg = va_arg(ap, int);
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
		bn = print_i_low_h_h_bis(str, arg, len, bn);
	bn = print_i_low_h_h_ter(str, arg, len, bn);
	return (bn);
}
