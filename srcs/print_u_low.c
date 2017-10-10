/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:13:09 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/10 13:35:03 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parser_u(va_list ap, int *str)
{
	if (str[3] == 'h')
		return (print_u_low_short(ap, str));
	if (str[3] == 'l')
		return (print_u_low_long(ap, str));
	if (str[3] == 'L')
		return (print_u_low_long_long(ap, str));
	if (str[3] == 'j')
		return (print_u_low_intmax_t(ap, str));
	if (str[3] == 'H')
		return (print_u_low_h_h(ap, str));
	if (str[3] == 'z')
	{
		str[3] = -1;
		return (print_u_low_long_long(ap, str));
	}
	return (0);
}

int		preci_u_low(int *str, unsigned int arg)
{
	unsigned int	nbr;
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
	ft_putnbr(arg);
	return (len - 1);
}

int		print_u_low_ter(int *str, unsigned int arg, int len, int bn)
{
	if (str[4] == '0' && str[5] != '-' && str[2] == -1)
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	if (str[4] == '0' && str[2] == -1)
		ft_putnbr(arg);
	else
		bn += preci_u_low(str, arg);
	if (str[5] == '-')
	{
		len = str[1] - bn;
		while (len-- > 0 && ++bn)
			write(1, " ", 1);
	}
	return (bn);
}

int		print_u_low_bis(int *str, unsigned int arg, int len, int bn)
{
	if (str[5] != '-')
		if (str[4] != '0' || (str[4] == '0' && str[2] != -1))
			while (len-- > 0 && ++bn)
				write(1, " ", 1);
	return (print_u_low_ter(str, arg, len, bn));
}

int		print_u_low(va_list ap, int *str)
{
	unsigned int	arg;
	unsigned int	nbr;
	int				len;
	int				bn;

	if (str[3] != -1)
		return (parser_u(ap, str));
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
	return (print_u_low_bis(str, arg, len, bn));
}
