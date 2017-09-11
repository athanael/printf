/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:37:07 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/11 17:54:53 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../include/ft_printf.h>

int	flag_length(const char *format, va_list ap, int *i, char c)
{
	int		size;
	char	*str;

	*i++;
	size = ft_atoi(format + *i);
	while (format[*i] >= '0' && format[*i] <= '9')
		*i++;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	str[size] = '\0';
	if (c == '0')
		while (size--)
			str[size] = c;
	else
	{
		while (--size)
			str[size] = ' ';
		str[size] = c;
	}
	return (check_conv(format, ap, *i, str));
}
