/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:41:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/21 16:48:36 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_c_low(va_list ap, int *str)
{
	char	arg;

	if (str[3] == 'l')
		return (print_c_up(ap, str));
	arg = va_arg(ap, int);
	write(1, &arg, 1);
	return (1);
}
