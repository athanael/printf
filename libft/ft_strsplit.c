/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:32:40 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/18 17:00:11 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		word;
	int		length;
	char	**dest;

	word = ft_nb_words(str, c);
	if (!str || !(dest = (char**)malloc(sizeof(dest) * (word + 1))))
		return (NULL);
	i = 0;
	j = -1;
	while (++j < word)
	{
		while (str[i] == c)
			++i;
		length = ft_len_split_word(str + i, c);
		dest[j] = (char*)malloc(sizeof(*dest) * (length + 1));
		if (!dest[j])
			return (NULL);
		ft_fill_word(dest[j], str + i, length);
		i = i + length;
	}
	dest[j] = 0;
	return (dest);
}
