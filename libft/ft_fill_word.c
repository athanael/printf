/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 23:06:06 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 23:06:30 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill_word(char *dest, const char *src, int length)
{
	int		i;

	i = -1;
	while (++i < length)
		dest[i] = src[i];
	dest[i] = '\0';
}
