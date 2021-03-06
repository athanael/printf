/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:07:14 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/12 16:33:12 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int n, size_t len)
{
	size_t			i;
	unsigned char	c;
	unsigned char	*tmp;

	c = (unsigned char)n;
	tmp = (unsigned char*)s;
	i = 0;
	while (i < len)
		if (tmp[i++] == c)
			return (tmp + i - 1);
	return (NULL);
}
