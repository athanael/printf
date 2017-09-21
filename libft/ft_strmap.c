/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:41:17 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/13 17:52:47 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	int		i;
	char	*res;

	if (!str || !(res = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	i = -1;
	while (str[++i])
		res[i] = (*f)(str[i]);
	res[i] = 0;
	return (res);
}
