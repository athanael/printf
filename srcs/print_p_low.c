/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 17:55:41 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/10 15:26:26 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		if_no_arg(int i, int *str, int len)
{
	i = 0;
	if (str[1] != -1)
		len = str[1];
	while (len > 3 && len-- && str[5] != '-')
	{
		write(1, " ", 1);
		i++;
	}
	write(1, "0x0", 3);
	if (str[5] == '-')
	{
		while (len >= 3 && len--)
		{
			write (1, " ", 1);
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
