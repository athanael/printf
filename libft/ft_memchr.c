/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:44:50 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 13:00:04 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*try;

	try = (unsigned char *)s;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if (try[i] == c)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	try = NULL;
	return ((void *)try);
}
