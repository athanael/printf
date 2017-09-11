/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:10:12 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:19:02 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!(newstr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		newstr[i] = '\0';
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
