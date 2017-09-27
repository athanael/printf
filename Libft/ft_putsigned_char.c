/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsigned_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 18:29:31 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/27 18:33:45 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putsigned_char(signed char nb)
{
	if (nb == -128)
	{
		ft_putchar('-');
		ft_putchar('1');
		ft_putsigned_char(28);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb / 10 > 0)
		ft_putsigned_char(nb / 10);
	ft_putchar(nb % 10 + '0');
}
