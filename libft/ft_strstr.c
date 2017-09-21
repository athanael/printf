/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:12:51 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 17:29:05 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;

	j = 0;
	if (to_find[0] == 0)
		return ((char*)str);
	while (str[j] != '\0')
	{
		if (to_find[0] == str[j])
		{
			i = 1;
			while (to_find[i] == str[j + i] && to_find[i] != '\0')
				i++;
			if (to_find[i] == '\0')
				return ((char*)str + j);
		}
		j++;
	}
	return (0);
}
