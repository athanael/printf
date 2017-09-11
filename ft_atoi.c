/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:31:59 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:46:03 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		neg;

	neg = 0;
	i = 0;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\f' \
			|| str[i] == '\v' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0' && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-res);
	return (res);
}
