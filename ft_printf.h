/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:29:40 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/11 15:17:02 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../Libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		check_flag(const char *format, va_list ap, int *i);
#endif
