/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:51:37 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/25 11:38:16 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_majuscule(unsigned int nb, int base)
{
	int		len;
	char	*res;

	if (base == 10)
		return (ft_itoa(nb));
	if (nb == 0)
		return ("0");
	len = ft_len_nb(nb, base);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	res[len] = 0;
	while (len-- > 0)
	{
		if (nb % base < 10)
			res[len] = nb % base + '0';
		else
			res[len] = nb % base + 'A' - 10;
		nb /= base;
	}
	return (res);
}
