/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_deci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:50:40 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 16:27:50 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flag_deci(const char *format, va_list ap, int *i, char *str)
{
	int		nbr;

	*i++;
	nbr = ft_atoi(format + *i);
	while (format[*i] >= '0' && format[*i] <= '9')
		*i++;
	if (format[*i] == 'h' || format[*i] == 'l' ||
			format[*i] == 'j' || format[*i] == 'z')
		return (flag_type(format, ap, i, str));
	return (check_conv())
}
