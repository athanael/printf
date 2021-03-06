/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:11:45 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/12 21:12:19 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] || s2[i])
		if (s1[i] != s2[i] || !s1[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
