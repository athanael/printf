/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:41:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 14:10:44 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_s_low(va_list ap, int *str)
{
	char	*arg;
	int		len;
	int		bn;
	int		max;

	if (str[3] == 'l')
		return (print_s_up(ap, str));
	arg = va_arg(ap, char*);
	if (!arg)
		arg = "(null)";
	bn = ft_strlen(arg);
	if (str[2] != -1 && str[2] < bn)
		bn = str[2];
	max = bn;
	if (str[1] > bn)
		max = str[1];
	len = max;
	if (str[5] != '-')
		while (len-- > bn)
			write(1, " ", 1);
	write(1, arg, bn);
	if (str[5] == '-')
		while (len-- > bn)
			write(1, " ", 1);
	return (max);
}
