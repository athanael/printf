/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsize_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:56:28 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/29 16:04:53 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putsize_t(size_t nb)
{
	if (nb / 10 > 0)
		ft_putsize_t(nb / 10);
	ft_putchar(nb % 10 + '0');
}
