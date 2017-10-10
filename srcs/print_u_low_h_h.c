/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_low_h_h.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 09:59:24 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/10 10:07:36 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		preci_u_low_h_h(int *str, unsigned char arg)
{
	unsigned char	nbr;
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
	ft_put_unsigned_ascii(arg);
	return (len - 1);
}

int		print_u_low_ter_h_h(int *str, unsigned char arg, int len, int bn)
{
	if (str[4] == '0' && str[5] != '-' && str[2] == -1)
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	if (str[4] == '0' && str[2] == -1)
		ft_put_unsigned_ascii(arg);
	else
		bn += preci_u_low_h_h(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_u_low_bis_h_h(int *str, unsigned char arg, int len, int bn)
{
	if (str[5] != '-')
		if (str[4] != '0' || (str[4] == '0' && str[2] != -1))
			while (len-- > 0 && ++bn)
				write(1, " ", 1);
	return (print_u_low_ter_h_h(str, arg, len, bn));
}

int		print_u_low_h_h(va_list ap, int *str)
{
	unsigned char	arg;
	unsigned char	nbr;
	int				len;
	int				bn;

	arg = va_arg(ap, unsigned int);
	bn = 1;
	nbr = arg;
	while (nbr / 10 != 0 && ++bn)
		nbr /= 10;
	if (arg == 0 && str[2] == 0)
		bn = 0;
	len = str[1] - bn;
	if (str[2] > bn)
		len = str[1] - str[2];
	return (print_u_low_bis_h_h(str, arg, len, bn));
}
