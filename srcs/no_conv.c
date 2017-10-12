/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:31:12 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/11 13:43:19 by phanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		no_conv(int *str, int index, const char *format)
{
	int		i;
	int		res;
	int		stop;

	index--;
	res = 0;
	stop = ft_strlen(format);
	if (str[1] != -1 && str[5] == -1)
	{
		i = str[1] + stop;
		while (i > stop + 1 && i--)
		{
			write(1, " ", 1);
			res++;
		}
		return (res);
	}
	if (str[5] == '-')
	{
		i = str[1] + stop;
		while (i > stop + 1 && i--)
		{
			write(1, " ", 1);
			res++;
		}
		return (res);
	}
	return (0);
}
