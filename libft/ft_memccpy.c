/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:32:16 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/18 17:50:55 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int n, size_t len)
{
	unsigned char	c;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	c = (unsigned char)n;
	while (len-- && *tmp_src != c)
		*(tmp_dst++) = *(tmp_src++);
	if (*tmp_src != c)
		return (NULL);
	*(tmp_dst++) = *(tmp_src++);
	return ((void*)tmp_dst);
}
