/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:10:08 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/18 16:49:54 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*res;

	if (!str || !(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	res = ft_strncpy(res, str + start, len);
	res[len] = 0;
	return (res);
}
