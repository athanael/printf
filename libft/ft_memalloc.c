/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 18:26:55 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/13 15:49:55 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (size == 0 || !(str = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (size-- > 0)
		str[size] = 0;
	return ((void*)str);
}
