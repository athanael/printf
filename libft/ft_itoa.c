/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:40:05 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 22:32:31 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;

	if (n == 0 || n == -2147483648)
		return (ft_excep_itoa(n));
	sign = 0;
	if (n < 0)
		sign = 1;
	if (n < 0)
		n *= -1;
	i = 0;
	while (ft_recur_power(10, i) <= n)
		++i;
	if (!(res = (char*)malloc(sizeof(char) * (i + sign + 1))))
		return (0);
	res[i + sign] = 0;
	while (i-- > 0)
	{
		res[i + sign] = n % 10 + '0';
		n /= 10;
	}
	if (sign == 1)
		res[0] = '-';
	return (res);
}
