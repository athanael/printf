/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:48:05 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/13 19:44:04 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned int	i;
	int				j;
	int				tmp;
	char			*res;

	if (!s)
		return (0);
	i = 0;
	j = -1;
	while (s[++j] == ' ' || s[j] == '\t' || s[j] == '\n')
		++i;
	tmp = j--;
	while (s[++j])
		if ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') &&
				!(s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'))
			tmp = j;
	if (!(s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'))
		tmp = j;
	if (!(res = (char*)malloc(sizeof(char) * (tmp - i))))
		return (0);
	res = ft_strsub(s, i, tmp - i);
	res[tmp - i] = 0;
	return (res);
}
