/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_m_z.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:12:08 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/02 14:13:27 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	write_z(int *str, int bn, char *ret)
{
	int	len;

	len = str[1] - bn;
	while (len-- > 0)
	{
		ft_putchar('0');
		++bn;
	}
	ft_putstr(ret);
	return (bn);
}

int	write_m(int *str, int bn, char *ret, char *diese)
{
	int	len;

	len = str[1] - bn;
	if (str[8] == '#')
		ft_putstr(diese);
	ft_putstr(ret);
	while (len-- > 0)
	{
		ft_putchar(' ');
		++bn;
	}
	return (bn);
}
