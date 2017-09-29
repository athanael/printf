/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_long_long.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:52:20 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 15:52:42 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsigned_long_long(unsigned long long nb)
{
	if (nb / 10 > 0)
		ft_putunsigned_long_long(nb / 10);
	ft_putchar(nb % 10 + '0');
}
