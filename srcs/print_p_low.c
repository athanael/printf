/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 17:55:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/12 16:50:50 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		if_no_arg(int i, int *str, int len)
{
	i = 0;
	len = str[1] - 3;
	while (len > 0 && str[5] != '-' && str[4] == -1)
	{
		write(1, " ", 1);
		len--;
		i++;
	}
	write(1, "0x0", 3);
	while (len > 0 && str[4] == '0')
	{
		write(1, "0", 1);
		len--;
		i++;
	}
	if (str[5] == '-')
	{
		while (len >= 0 && len--)
		{
			write(1, " ", 1);
			i++;
		}
	}
	return (i + 3);
}

int		print_p_low(va_list ap, int *str, int len)
{
	void		*arg;
	uintmax_t	ptr;
	int			i;
	char		res[17];

	i = 0;
	arg = va_arg(ap, void*);
	if (!arg)
		return (if_no_arg(i, str, len));
	ptr = (uintmax_t)arg;
	i = 16;
	res[16] = '\0';
	while (--i >= 0)
	{
		if (ptr % 16 < 10)
			res[i] = ptr % 16 + '0';
		else
			res[i] = ptr % 16 + 'a' - 10;
		ptr /= 16;
	}
	++i;
	while (res[i] == '0')
		++i;
	return (write(1, "0x", 2) + write(1, res + i, ft_strlen(res + i)));
}
