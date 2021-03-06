/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:15:52 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/18 19:24:33 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t			i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char*)s1;
	tmp_s2 = (unsigned char*)s2;
	i = 0;
	while (++i <= len)
		if (tmp_s1[i - 1] != tmp_s2[i - 1])
			return (tmp_s1[i - 1] - tmp_s2[i - 1]);
	return (0);
}
