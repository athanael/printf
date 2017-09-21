/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:35:28 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/21 17:13:08 by dfouquet         ###   ########.fr       */
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
	while (arg[++i])
		bn += pfudor(arg[i], str);
	return (bn);
}
