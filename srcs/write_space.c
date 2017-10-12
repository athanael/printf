/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 09:10:17 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/12 17:41:46 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	write_space(int *str, int bn, int arg)
{
	int len;

	if (arg == 0 && str[2])
		bn = 1;
	len = str[1] - bn;
	while (len-- > 0)
	{
		write(1, " ", 1);
		++bn;
	}
	return (bn);
}

int	write_space_s(int *str, int len, int bn)
{
	int		res;

	if (str[1] == -1)
		return (0);
	len = str[1] - bn;
	res = len;
	while (len-- > 0 && ++bn)
		write(1, " ", 1);
	return (res);
}
