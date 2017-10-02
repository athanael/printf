/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:31 by atgerard          #+#    #+#             */
/*   Updated: 2017/10/02 17:35:04 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <locale.h>
#include <stdio.h>
#include <limits.h>

int		main(void)
{
	//	int 			t[2] = {206, 177};
	int				i;
	unsigned long	l;
	char			*str;

	//	char* l = setlocale(LC_ALL, "");
	//printf("\n%d\n", ft_printf("%hi", CHAR_MIN - 42));
	printf("\n%d\n", printf("%hi", 2343634623562356));
	return (0);
}
