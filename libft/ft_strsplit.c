/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:12:50 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/28 12:26:32 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lenword(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static int		ft_count_words(const char *str, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char		*ft_fill_tab(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (malloc(sizeof(char) * (ft_lenword(s, c) + 1)))))
		return (0);
	while (*s && *s != c)
	{
		str[i] = *s;
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (!(tab = (malloc(sizeof(char *) * (ft_count_words(s, c) + 1)))))
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			tab[i++] = ft_fill_tab(s, c);
			s += ft_lenword(s, c);
		}
	}
	tab[i] = NULL;
	return (tab);
}
