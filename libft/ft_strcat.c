/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:46:54 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 17:27:02 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (dst[i])
		i++;
	while (src[++j])
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (dst);
}
