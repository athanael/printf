/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:14:09 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 14:52:50 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ncludes/ft_prntf.h"

int		check_conv(char c, va_lst ap, char *str, char *type)
{
	if (c == 's')
		return (flag_s(ap, str, type));
	if (c == 'S')
		return (flag_S(ap, str, type));
	if (c == 'p')
		return (flag_p(ap, str, type));
	if (c == 'd')
		return (flag_d(ap, str, type));
	if (c == 'D')
		return (flag_D(ap, str, type));
	if (c == 'i')
		return (flag_i(ap, str, type));
	if (c == 'o')
		return (flag_o(ap, str, type));
	if (c == 'O')
		return (flag_O(ap, str, type));
	if (c == 'u')
		return (flag_u(ap, str, type));
	if (c == 'U')
		return (flag_U(ap, str, type));
	if (c == 'x')
		return (flag_x(ap, str, type));
	if (c == 'X')
		return (flag_X(ap, str, type));
	if (c == 'c')
		return (flag_c(ap, str, type));
	if (c == 'C')
		return (flag_C(ap, str, type));
	return (0);
}
