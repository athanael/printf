/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:31:12 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/10 15:50:59 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		no_conv(int *str, int index, const char *format)
{
	int		i;
	int		res;
	int		stop;

	index--;
	stop = 0;
	while (format[index] && index++)
		stop++;
	if (str[1] != -1)
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
