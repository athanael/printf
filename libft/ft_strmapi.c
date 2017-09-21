/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:54:39 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/13 17:55:55 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!str || !(res = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	i = 0;
	while (str[i++])
		res[i - 1] = (*f)(i - 1, str[i - 1]);
	res[i - 1] = 0;
	return (res);
}
