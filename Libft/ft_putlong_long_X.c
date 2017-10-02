/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_long_X.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 13:15:11 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/02 13:34:36 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_putlong_long_X(unsigned long long nb)
{
	int		res;

	printf("nb = %lld\n", nb);
	res = 1;
	if (nb / 16 > 0)
		res += ft_putlong_X(nb / 16);
	if (nb % 16 < 10)
		ft_putchar(nb % 16 + '0');
	else
		ft_putchar(nb % 16 + 'A' - 10);
	return (res);
}
