/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:41:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 18:01:57 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_c_low(va_list ap, int *str)
{
	char	arg;
	int		len;
	int		max;

	if (str[3] == 'l')
		return (print_c_up(ap, str));
	arg = va_arg(ap, int);
	len = str[1];
	max = 1;
	if (len > max)
		max = len;
	if (str[5] != '-' && str[4] != '0')
		while (len-- > 1)
			write(1, " ", 1);
	if (str[4] == '0')
		while (len-- > 1)
			write(1, "0", 1);
	write(1, &arg, 1);
	if (str[5] == '-')
		while (len-- > 1)
			write(1, " ", 1);
	return (max);
}
