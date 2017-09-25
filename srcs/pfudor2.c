/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfudor2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:16:57 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/25 17:23:04 by mallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		pfudor2(int len, char *ret, char *bin)
{
	if (len <= 16)
	{
		if (!(ret = three_byte(bin, len)))
			return (0);
		len = aff_wchar_t(ret, 3);
		return (len);
	}
	else if (len <= 32)
	{
		if (!(ret = four_byte(bin, len)))
		return (0);
		len = aff_wchar_t(ret, 4);
		return (len);
	}
	return (-1);
}
