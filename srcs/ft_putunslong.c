/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 09:50:31 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/21 10:17:55 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putlong(unsigned long nb)
{
	if (nb / 10 > 0)
		ft_putunslong(nb / 10);
	ft_putchar(nb % 10 + '0');
}