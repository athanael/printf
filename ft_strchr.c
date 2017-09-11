/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:56:46 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:13:43 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	buf;

	i = 0;
	buf = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == buf)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == buf)
		return ((char *)&s[i]);
	return (NULL);
}
