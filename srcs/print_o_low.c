/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 18:34:39 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/12 17:42:28 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parcer_o_low(va_list ap, int *str)
{
	if (str[3] == 'l' || str[3] == 'L')
		return (print_o_up(ap, str));
	if (str[3] == 'H')
		return (print_o_low_h_h(ap, str));
	if (str[3] == 'h')
		return (print_o_low_short(ap, str));
	if (str[3] == 'j')
		return (print_o_low_uintmax_t(ap, str));
	if (str[3] == 'z')
	{
		str[3] = -1;
		return (print_o_up(ap, str));
	}
	return (0);
}

int		write_preci(int *str, int bn, char *ret)
{
	int		len;
	int		preci;
	int		max;

	preci = str[2] - bn;
	len = bn;
	if (str[2] > len)
		len = str[2];
	max = str[1];
	if (len > max)
		max = len;
	len = str[1] - len;
	if (str[5] != '-')
		while (len-- > 0)
			ft_putchar(' ');
	while (preci-- > 0)
		ft_putchar('0');
	ft_putstr(ret);
	if (str[5] == '-')
		while (len-- > 0)
			ft_putchar(' ');
	return (max);
}

int		print_o_low_ter(int *str, unsigned int arg, int bn)
{
	char	*ret;

	bn = 0;
	ret = ft_itoa_base(arg, 8);
	if (ret[0] != '0' || str[2])
		bn = ft_strlen(ret);
	if (str[8] == '#' && arg != 0)
		bn += 1;
	if (str[2] != -1 && ret[0] != '0')
	{
		bn = (write_preci(str, bn, ret));
		free(ret);
		return (bn);
	}
	if (str[0] == -1)
		bn = write_space(str, bn, arg);
	if (str[5] == '-')
	{
		bn = write_m(str, bn, ret, "0");
		free(ret);
		return (bn);
	}
	if (str[8] == '#' && str[4] != '0' && str[1] != -1)
		bn = write_space(str, bn, arg);
	if (str[8] == '#')
		ft_putchar('0');
	if (str[8] == '#' && arg == 0)
		bn++;
	if (ret[0] != '0' || str[2])
	{
		bn = write_z(str, bn, ret);
		free(ret);
		return (bn);
	}
	return (bn);
}

int		print_o_low_bis(int *str, int len, int bn)
{
	if (len <= bn && str[7] == ' ')
	{
		write(1, " ", 1);
		++bn;
	}
	if (str[4] == '0')
		while (len-- > 0 && ++bn)
			write(1, "0", 1);
	return (bn);
}

int		print_o_low(va_list ap, int *str)
{
	int		arg;
	int		bn;
	int		len;

	if (str[3] != -1)
		return (parcer_o_low(ap, str));
	arg = va_arg(ap, unsigned int);
	bn = 0;
	len = arg;
	if (arg == 0)
		bn = 1;
	len = bn;
	if (str[5] != '-')
		bn = print_o_low_bis(str, len, bn);
	bn = print_o_low_ter(str, arg, bn);
	return (bn);
}
