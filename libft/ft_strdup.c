/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:12:10 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/12 15:40:27 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (dest);
	return (ft_strcpy(dest, src));
}
