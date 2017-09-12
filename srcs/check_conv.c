/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:14:09 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/12 14:34:12 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ncludes/ft_prntf.h"

int		check_conv(char c, va_lst ap, char *str)
{
	if (c == 's')
		return (flag_s());
	if (c == 'S')
		return (flag_S());
	if (c == 'p')
		return (flag_p());
	if (c == 'd')
		return (flag_d());
	if (c == 'D')
		return (flag_D());
	if (c == 'i')
		return (flag_i());
	if (c == 'o')
		return (flag_o());
	if (c == 'O')
		return (flag_O());
	if (c == 'u')
		return (flag_u());
	if (c == 'U')
		return (flag_U());
	if (c == 'x')
		return (flag_x());
	if (c == 'X')
		return (flag_X());
	if (c == 'c')
		return (flag_c());
	if (c == 'C')
		return (flag_C());
}
