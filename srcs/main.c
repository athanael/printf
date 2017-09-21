/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:31 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/21 18:24:21 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <locale.h>
#include <stdio.h>

int		main(void)
{
	int		t[2] = {206, 177};
	char	*mesgrossescouillesquicollent;
	char* l = setlocale(LC_ALL, "");

	mesgrossescouillesquicollent = "NULL";
	if (l == NULL) {
		printf("Locale not set\n");
	} 
	else {
		printf("Locale set to %s\n", l);
	}
	printf("\n%d\n", ft_printf("Hello %p t ki", mesgrossescouillesquicollent));
	printf("\n%d\n", printf("Hello %p t ki", mesgrossescouillesquicollent));
return (0);
}
