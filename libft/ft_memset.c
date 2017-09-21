/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:57:20 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/12 16:18:01 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *tab, int n, size_t len)
{
	unsigned char	c;
	unsigned char	*tmp;

	c = (unsigned char)n;
	tmp = (unsigned char*)tab;
	while (len-- > 0)
		tmp[len] = c;
	tab = (void*)tmp;
	return (tab);
}
