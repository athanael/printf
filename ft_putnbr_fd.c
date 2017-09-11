/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:52:30 by atgerard          #+#    #+#             */
/*   Updated: 2016/11/27 12:28:37 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		x;

	x = 1000000000;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	while (n / x == 0)
		x /= 10;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n *= -1;
	while (x)
	{
		if (-(n / x) == 0)
			ft_putchar_fd('0', fd);
		else
			ft_putchar_fd(-(n / x) + '0', fd);
		n %= x;
		x /= 10;
	}
}
