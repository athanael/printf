/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 09:46:04 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/18 14:12:37 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_d(va_list ap, int *str)
{
	int		arg;
	int		bn;
	int		len;

	arg = va_arg(ap, int);
	bn = 0;
	len = arg;
	while (len != 0)
	{
		bn++;
		len /= 10;
	}
	if (arg == 0)
		bn = 1;
	len = str[1] - bn;
	if (str[0] == '+' && arg >= 0)
			--len;
	if (str[0] != '-')
	{
		if (len < 1 && str[0] == ' ' && arg >= 0)
		{
			write(1, " ", 1);
			++bn;
		}
		while (len-- > 0)
		{
			if (str[0] == '0')
				write(1, &str[0], 1);
			else
				write(1, " ", 1);
			++bn;
		}
	}
	if (str[0] == '+' && arg >= 0)
	{
		write(1, "+", 1);
		++bn;
	}
	ft_putnbr(arg);
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
