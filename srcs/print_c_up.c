/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:39:16 by dfouquet          #+#    #+#             */
/*   Updated: 2017/09/25 17:58:33 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		print_c_up(va_list ap, int *str)
{
	unsigned int	arg;

	arg = va_arg(ap, unsigned int);
	return (pfudor(arg, str));
}
