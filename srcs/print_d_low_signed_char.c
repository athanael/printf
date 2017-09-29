/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low_signed_char.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:19:16 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 14:58:11 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		preci_d_low_signed_char(int *str, signed char arg)
{
	signed char		nbr;
	int				len;
	int				bn;

	if (str[2] == 0 && arg == 0)
		return (0);
	bn = 0;
	if (arg == -128)
	{
		ft_putchar('-');
		while (str[2] - bn++ > 10)
			ft_putchar('0');
		ft_putstr("128");
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
	ft_putsigned_char(arg);
	return (len - 1);
}

int		print_d_low_signed_char_ter(int *str, signed char arg, int len, int bn)
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
		ft_putsigned_char(arg);
	else
		bn += preci_d_low_signed_char(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_d_low_signed_char_bis(int *str, signed char arg, int len, int bn)
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
	return (print_d_low_signed_char_ter(str, arg, len, bn));
}

int		print_d_low_signed_char(va_list ap, int *str)
{
	signed char		arg;
	signed char		nbr;
	int				bn;
	int				len;

	arg = va_arg(ap, int);
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
	return (print_d_low_signed_char_bis(str, arg, len, bn));
}
