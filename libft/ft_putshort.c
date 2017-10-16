/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putshort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:27:58 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 18:33:27 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putshort(short nb)
{
	if (nb == -32768)
	{
		ft_putchar('-');
		ft_putchar('3');
		ft_putshort(2768);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb / 10 > 0)
		ft_putshort(nb / 10);
	ft_putchar(nb % 10 + '0');
}
