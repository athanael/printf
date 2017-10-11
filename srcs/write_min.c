/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 13:23:59 by phanna            #+#    #+#             */
/*   Updated: 2017/10/11 13:41:27 by phanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		write_min(int *str, int bn)
{
	ft_putchar('-');
	while (str[2] - bn++ > 10)
		ft_putchar('0');
	ft_putstr("2147483648");
	return (bn - 1);
}

int		write_min_short(int *str, int bn)
{
	ft_putchar('-');
	while (str[2] - bn++ > 10)
		ft_putchar('0');
	ft_putstr("32768");
	return (bn - 1);
}

int		write_min_char_signed(int *str, int bn)
{
	ft_putchar('-');
	while (str[2] - bn++ > 10)
		ft_putchar('0');
	ft_putstr("128");
	return (bn - 1);
}
