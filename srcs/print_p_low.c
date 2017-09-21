/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 17:55:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/21 18:31:36 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_p_low(va_list ap, int *str)
{
	unsigned int	arg;
	int				i;
	char			res[8];

	arg = va_arg(ap, unsigned int);
	if (!arg)
		return (write(1, "0x0", 3));
	i = 7;
	res[7] = '\0';
	while (--i >= 0)
	{
		if (arg % 16 < 10)
			res[i] = arg % 16 + '0';
		else
			res[i] = arg % 16 + 'a' - 10;
		arg /= 16;
	}
	write(1, "0x10", 4);
	return (write(1, res, ft_strlen(res)) + 4);
}
