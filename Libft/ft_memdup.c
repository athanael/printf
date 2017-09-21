/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:12:10 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 21:07:24 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src)
{
	unsigned char	*dest;
	unsigned char	*tmp;
	int				len;

	if (!src)
		return (0);
	tmp = (unsigned char*)src;
	len = ft_strlen((const char*)tmp);
	if (!(dest = (unsigned char*)malloc(sizeof(unsigned char) * (len + 1))))
		return (dest);
	return (ft_memcpy((void*)dest, (void*)src, len));
}
