/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 09:10:17 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/27 09:47:42 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		write_space(int *str, int len, int bn)
{
	len = str[1] - bn;
	while (len-- > 0)
	{
		write(1, " ", 1);
		++bn;
	}
	return (bn);
}

int		write_space_2(int *str, int len, int bn, int arg)
{
	if (arg == 0)
		bn = write_space(str, len, bn);
	len = str[1] - bn;
	while (len-- > 2)
	{
		write(1, " ", 1);
		++bn;
	}
	return (bn);
}

int		write_space_s(int *str, int len, int bn)
{
	int		res;

	len = str[1] - bn;
	res = len;
	while (len-- > 0)
	{
		write(1, " ", 1);
		++bn;
	}
	return (res);
}
