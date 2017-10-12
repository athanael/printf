/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfudor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:58:21 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/12 17:38:27 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*one_byte(char *bin, int len)
{
	int		i;
	int		j;
	char	*ret;

	if (!(ret = ft_strdup("0xxxxxxx")))
		return (NULL);
	i = 8;
	j = len;
	while (j != 0 && i-- > 0)
		if (ret[i] == 'x')
			ret[i] = bin[--j];
	while (i-- > 0)
		if (ret[i] == 'x')
			ret[i] = '0';
	return (ret);
}

char	*two_byte(char *bin, int len)
{
	int		i;
	int		j;
	char	*ret;

	if (!(ret = ft_strdup("110xxxxx10xxxxxx")))
		return (NULL);
	i = 16;
	j = len;
	while (j != 0 && i > 0)
	{
		--i;
		if (ret[i] == 'x')
		{
			--j;
			ret[i] = bin[j];
		}
	}
	while (i-- > 0)
		if (ret[i] == 'x')
			ret[i] = '0';
	return (ret);
}

int		pfudor(unsigned int arg, int *str)
{
	char			*bin;
	char			*ret;
	int				len;

	str = NULL;
	ret = NULL;
	bin = ft_itoa_base(arg, 2);
	len = ft_strlen(bin);
	if (len <= 7)
	{
		if (!(ret = one_byte(bin, len)))
		{
			free(bin);
			return (0);
		}
		len = aff_wchar_t(ret, 1);
	}
	else if (len <= 11)
	{
		if (!(ret = two_byte(bin, len)))
		{
			free(bin);
			return (0);
		}
		len = aff_wchar_t(ret, 2);
	}
	else
		len = pfudor2(len, bin, ret);
	free(bin);
	return (len);
}
