/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:12:03 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:21:20 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	buf;

	i = ft_strlen(s);
	buf = (char)c;
	while (i >= 0)
	{
		if (s[i] == buf)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == buf)
		return ((char *)&s[i]);
	return (NULL);
}
