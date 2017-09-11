/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:43:36 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:47:58 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*area;
	int		i;

	i = 0;
	area = NULL;
	if (!(area = (char *)malloc(sizeof(area) * size)))
		return (NULL);
	while (area[i])
	{
		area[i] = '\0';
		i++;
	}
	return ((void *)area);
}
