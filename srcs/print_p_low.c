/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 17:55:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 19:23:29 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_p_low(va_list ap, int *str)
{
	void		*arg;
	uintmax_t	ptr;
	int			i;
	char		res[17];

	arg = va_arg(ap, void*);
	if (!arg)
		return (write(1, "0x0", 3));
	ptr = (uintmax_t)arg;
	i = 16;
	res[16] = '\0';
	while (--i >= 0)
	{
		if (ptr % 16 < 10)
			res[i] = ptr % 16 + '0';
		else
			res[i] = ptr % 16 + 'a' - 10;
		ptr /= 16;
	}
	++i;
	while (res[i] == '0')
		++i;
	return (write(1, "0x", 2) + write(1, res + i, ft_strlen(res + i)));
}
