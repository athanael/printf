/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:41:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/18 17:56:22 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_s_low(va_list ap, int *str)
{
	char	*arg;

//	if (str[3] == 'l')
//		return (print_s_up(ap, str));
	arg = va_arg(ap, char*);
	if (!arg)
	{
		ft_putstr("(null)");
		return (6);
	}
	write(1, arg, ft_strlen(arg));
	return (ft_strlen(arg));
}
