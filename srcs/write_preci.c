/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_preci.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 12:50:48 by phanna            #+#    #+#             */
/*   Updated: 2017/10/16 13:11:34 by phanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
