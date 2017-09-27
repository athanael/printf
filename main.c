/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:31 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/27 11:56:57 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <locale.h>
#include <stdio.h>

int		main(void)
{
	int t[2] = {206, 177};

	char* l = setlocale(LC_ALL, "");
//	printf("\n%d\n", ft_printf("%s", "abc"));
	printf("\n%d\n", printf("%.1x", 52));
	printf("\n%d\n", printf("%.x", 9));
		return (0);
}
