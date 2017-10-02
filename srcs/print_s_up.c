/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:35:28 by dfouquet          #+#    #+#             */
/*   Updated: 2017/10/02 10:12:26 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_s_up(va_list ap, int *str)
{
	unsigned int	*arg;
	int				bn;
	int				i;

	bn = 0;
	i = -1;
	arg = va_arg(ap, unsigned int *);
	if (arg == NULL || !arg)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (arg[++i])
		bn += pfudor(arg[i], str);
	return (bn);
}
