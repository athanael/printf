/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfudor2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:16:57 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/25 13:39:50 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		pfudor2(int len, char *ret, char *bin)
{
	if (len <= 16)
	{
		if (!(ret = three_byte(bin, len)))
			return (0);
		return (aff_wchar_t(ret, 3));
	}
	if (!(ret = four_byte(bin, len)))
		return (0);
	return (aff_wchar_t(ret, 4));
}
