/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:27 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:36:11 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strstrv(const char *big, const char *little)
{
	size_t		pos;
	size_t		i;
	size_t		j;
	char		*buf;

	pos = 0;
	j = 0;
	i = 0;
	buf = (char *)big;
	while (pos < ft_strlen(big))
	{
		while (big[i] != '\0')
		{
			if (big[i] == little[j])
				j++;
			else
				j = 0;
			if (little[j] == '\0')
				return (&buf[i + 1 - ft_strlen(little)]);
			i++;
		}
		pos++;
		i = pos;
	}
	return (NULL);
}

char		*ft_strstr(const char *big, const char *little)
{
	char	*res;

	res = (char *)big;
	if (ft_strcmp(little, "") != 0)
		return (ft_strstrv(big, little));
	return (res);
}
