/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:41:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 18:11:24 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		before_s(int c, int len, int bn)
{
	if (c == '0')
		while (len-- > bn)
			write(1, "0", 1);
	while (len-- > bn)
		write(1, " ", 1);
	return (bn);
}

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
	if (str[5] == -1)
		len = before_s(str[4], len, bn);
	write(1, arg, bn);
	if (str[5] == '-')
		while (len-- > bn)
			write(1, " ", 1);
	return (max);
}
