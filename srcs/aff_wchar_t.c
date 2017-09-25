/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_wchar_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:24:50 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/25 14:28:07 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		aff_wchar_t(char *bin, int bn)
{
	int		i;
	int		*uni_int;

	if (!(uni_int = (int*)malloc(sizeof(int) * bn)))
		return (0);
	i = -1;
	while (++i < bn)
		uni_int[i] = bin_to_deci(bin + i * 8);
	i = 0;
	while (i < bn)
	{
		write(1, &uni_int[i], 1);
		i++;
	}
	ft_memdel((void *)&bin);
	ft_memdel((void *)&uni_int);
	return (bn);
}
