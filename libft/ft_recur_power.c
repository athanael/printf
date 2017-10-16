/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recur_power.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 22:03:24 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 22:38:23 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_recur_power(int nb, int pow)
{
	if (nb == 1)
		return (1);
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recur_power(nb, pow - 1));
}
