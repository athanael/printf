/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfudor2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:16:57 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/25 18:04:22 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*three_byte(char *bin, int len)
{
	int		i;
	int		j;
	char	*ret;

	if (!(ret = ft_strdup("1110xxxx10xxxxxx10xxxxxx")))
		return (NULL);
	i = 24;
	j = len;
	while (j != 0 && i-- > 0)
		if (ret[i] == 'x')
			ret[i] = bin[--j];
	while (i-- > 0)
		if (ret[i] == 'x')
			ret[i] = '0';
	return (ret);
}

char	*four_byte(char *bin, int len)
{
	int		i;
	int		j;
	char	*ret;

	if (!(ret = ft_strdup("11110xxx10xxxxxx10xxxxxx10xxxxxx")))
		return (NULL);
	i = 32;
	j = len;
	while (j != 0 && i-- > 0)
		if (ret[i] == 'x')
			ret[i] = bin[--j];
	while (i-- > 0)
		if (ret[i] == 'x')
			ret[i] = '0';
	return (ret);
}

int		pfudor2(int len, char *bin, char *ret)
{
	if (len <= 16)
	{
		if (!(ret = three_byte(bin, len)))
			return (0);
		len = aff_wchar_t(ret, 3);
		free(bin);
		return (len);
	}
	else if (len <= 32)
	{
		if (!(ret = four_byte(bin, len)))
			return (0);
		len = aff_wchar_t(ret, 4);
		free(bin);
		return (len);
	}
	else
		return (-1);
}
