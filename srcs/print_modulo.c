/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:13:09 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 18:24:55 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_modulo_two(int *str, int size, int res)
{
	ft_putchar('%');
	while (size-- > 1)
		write(1, " ", 1);
	return (res);
}

int		print_modulo(int *str)
{
	int		size;
	int		res;

	size = 1;
	if (str[1] > size)
		size = str[1];
	res = size;
	if (str[5] == '-')
		return (print_modulo_two(str, size, res));
	if (str[4] == '0')
		while (size-- > 1)
			write(1, "0", 1);
	while (size-- > 1)
		write(1, " ", 1);
	ft_putchar('%');
	return (res);
}
