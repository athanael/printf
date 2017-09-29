/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_low_intmax_t.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:57:58 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 15:58:27 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		preci_u_low_intmax_t(int *str, intmax_t arg)
{
	intmax_t	nbr;
	int			len;
	int			bn;

	if (str[2] == 0 && arg == 0)
		return (0);
	bn = 0;
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
	ft_putintmax_t(arg);
	return (len - 1);
}

int		print_u_low_intmax_t_ter(int *str, intmax_t arg, int len, int bn)
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
		ft_putintmax_t(arg);
	else
		bn += preci_u_low_intmax_t(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_u_low_intmax_t_bis(int *str, intmax_t arg, int len, int bn)
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
	return (print_u_low_intmax_t_ter(str, arg, len, bn));
}

int		print_u_low_intmax_t(va_list ap, int *str)
{
	intmax_t	arg;
	intmax_t	nbr;
	int			bn;
	int			len;

	arg = va_arg(ap, intmax_t);
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
	return (print_u_low_intmax_t_bis(str, arg, len, bn));
}
