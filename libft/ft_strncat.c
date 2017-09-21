/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:46:43 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 17:27:18 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, int n)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (dst[i])
		i++;
	while (src[++j] && j < n)
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (dst);
}
