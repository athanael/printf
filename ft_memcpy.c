/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:46:02 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/28 12:47:50 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*t1;
	const char	*t2;

	i = 0;
	t1 = (char *)dst;
	t2 = (const char *)src;
	if (!n)
		return (dst);
	while (i < n)
	{
		t1[i] = t2[i];
		i++;
	}
	return (dst);
}
