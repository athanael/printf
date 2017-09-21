/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:31 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/21 15:44:09 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <locale.h>
#include <stdio.h>

int		main(void)
{
	int		t[2] = {206, 177};

	char* l = setlocale(LC_ALL, "");
	if (l == NULL) {
		printf("Locale not set\n");
	} 
	else {
		printf("Locale set to %s\n", l);
	}
	printf("\n%d\n", ft_printf("Hello %C t ki", 46124));
	printf("\n%d\n", printf("Hello %C t ki", 46124));
return (0);
}
