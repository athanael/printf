/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:15:24 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/12 21:05:46 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (to_find[0] == 0)
		return ((char*)str);
	while (str[j] != '\0' && j < len)
	{
		if (to_find[0] == str[j])
		{
			i = 1;
			while (to_find[i] == str[j + i] && to_find[i] != '\0')
				i++;
			if (i + j > len)
				return (0);
			if (to_find[i] == '\0')
				return ((char*)str + j);
		}
		j++;
	}
	return (0);
}
