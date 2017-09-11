/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:03:20 by atgerard          #+#    #+#             */
/*   Updated: 2017/04/13 10:18:25 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		endofdst;

	endofdst = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (dst[i] && i < size)
		i++;
	endofdst = i;
	while (src[i - endofdst] && i < size - 1)
	{
		dst[i] = src[i - endofdst];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (endofdst + ft_strlen(src));
}
