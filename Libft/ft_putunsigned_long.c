/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_long.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:43:14 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 15:44:12 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsigned_long(unsigned long nb)
{
	if (nb / 10 > 0)
		ft_putunsigned_long(nb / 10);
	ft_putchar(nb % 10 + '0');
}
