/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_low_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:40:35 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 15:42:23 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		preci_u_low_long(int *str, unsigned long arg)
{
	unsigned long	nbr;
	int				len;
	int				bn;

	if (str[2] == 0 && arg == 0)
		return (0);
	bn = 0;
	nbr = arg;
	while (nbr != 0)
	{
		bn++;
		nbr /= 10;
	}
	if (arg == 0)
		bn = 1;
	len = 0;
	while (str[2] - len++ > bn)
		ft_putchar('0');
	ft_putunsigned_long(arg);
	return (len - 1);
}

int		print_u_low_long_ter(int *str, unsigned long arg, int len, int bn)
{
	if (str[4] == '0' && str[5] != '-' && str[2] == -1)
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	if (str[4] == '0' && str[2] == -1)
		ft_putunsigned_long(arg);
	else
		bn += preci_u_low_long(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_u_low_long_bis(int *str, unsigned long arg, int len, int bn)
{
	if (str[5] != '-')
		if (str[4] != '0' || (str[4] == '0' && str[2] != -1))
			while (len-- > 0 && ++bn)
				write(1, " ", 1);
	return (print_u_low_long_ter(str, arg, len, bn));
}

int		print_u_low_long(va_list ap, int *str)
{
	unsigned long	arg;
	unsigned long	nbr;
	int				len;
	int				bn;

	arg = va_arg(ap, unsigned long);
	bn = 1;
	nbr = arg;
	while (nbr / 10 != 0 && ++bn)
		nbr /= 10;
	if (arg == 0 && str[2] == 0)
		bn = 0;
	len = str[1] - bn;
	if (str[2] > bn)
		len = str[1] - str[2];
	return (print_u_low_long_bis(str, arg, len, bn));
}
