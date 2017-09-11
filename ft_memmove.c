/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:47:42 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/28 12:47:22 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)dst;
	t2 = (unsigned char *)src;
	if (!len)
		return (dst);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		t1[len] = t2[len];
	return (dst);
}
