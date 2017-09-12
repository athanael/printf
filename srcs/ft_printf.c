/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:27:52 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 08:30:18 by phanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <includes/ft_printf.h>

int		ft_printf(const char *format, ...)
{
	int			i;
	int			bn;
	va_list		ap;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			ft_putchar(format[i++]);
			bn++;
		}
		if (format[i] == '%')
			bn += check_flag(format, ap, &i);
	}
	va_end(ap);
	return (bn);
}
