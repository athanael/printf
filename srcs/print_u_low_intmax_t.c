/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_low_intmax_t.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:57:58 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/10 12:07:05 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		preci_u_low_intmax_t(int *str, uintmax_t arg)
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
	while (str[2] - len++ > bn)
		ft_putchar('0');
	ft_putunsigned_long(arg);
	return (len - 1);
}

int		print_u_low_intmax_t_ter(int *str, uintmax_t arg, int len, int bn)
{
	if (str[4] == '0' && str[5] != '-' && str[2] == -1)
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	if (str[4] == '0' && str[2] == -1)
		ft_putunsigned_long(arg);
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

int		print_u_low_intmax_t_bis(int *str, uintmax_t arg, int len, int bn)
{
	if (str[5] != '-')
	{
		if (len < 1 && str[7] == ' ' && str[6] != '+')
		{
			write(1, " ", 1);
			++bn;
		}
		if (str[4] != '0' || (str[4] == '0' && str[2] != -1))
			while (len-- > 0 && ++bn)
				write(1, " ", 1);
	}
	return (print_u_low_intmax_t_ter(str, arg, len, bn));
}

int		print_u_low_intmax_t(va_list ap, int *str)
{
	uintmax_t	arg;
	uintmax_t	nbr;
	int			bn;
	int			len;

	arg = va_arg(ap, uintmax_t);
	bn = 1;
	nbr = arg;
	while (nbr / 10 != 0 && ++bn)
		nbr /= 10;
	if (arg == 0 && str[2] == 0)
		bn = 0;
	len = str[1] - bn;
	if (str[2] > bn)
		len = str[1] - str[2];
	return (print_u_low_intmax_t_bis(str, arg, len, bn));
}
