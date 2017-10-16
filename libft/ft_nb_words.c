/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 23:05:11 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/18 16:59:53 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_words(const char *str, char c)
{
	int		i;
	int		words;

	if (!str)
		return (0);
	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			++words;
			while (str[i] && str[i] != c)
				++i;
		}
		while (str[i] == c)
			++i;
	}
	return (words);
}
