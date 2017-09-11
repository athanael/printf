/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:48:16 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:12:38 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*buf;

	buf = (char *)b;
	i = 0;
	while (i < len)
	{
		buf[i] = (unsigned char)c;
		i++;
	}
	b = (void *)buf;
	return (b);
}
