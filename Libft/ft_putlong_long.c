/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:32:34 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 18:48:13 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlong_long(long long nb)
{
	if (nb == -9223372036854775807)
	{
		ft_putchar('-');
		ft_putchar('9');
		ft_putlong_long(223372036854775807);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb / 10 > 0)
		ft_putlong_long(nb / 10);
	ft_putchar(nb % 10 + '0');
}
