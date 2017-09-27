/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:13:09 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 08:52:41 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_modulo_two(int *str, int size, int res, int minus)
{
	size = str[1];
	res = size;
	if (minus == 1)
		ft_putchar('%');
	while (size > 1)
	{
		write(1, " ", 1);
		size--;
	}
	if (minus == 0)
		ft_putchar('%');
	return (res);
}

int		print_modulo(int *str)
{
	int		size;
	int		res;
	int		minus;

	size = 1;
	res = size;
	if (str[0] == 45)
		minus = 1;
	else
		minus = 0;
	if (str[1] != -1)
		res = print_modulo_two(str, size, res, minus);
	else
		ft_putchar('%');
	return (res);
}
