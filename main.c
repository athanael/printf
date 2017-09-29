/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:31 by atgerard          #+#    #+#             */
/*   Updated: 2017/09/29 19:18:16 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <locale.h>
#include <stdio.h>

int		main(void)
{
	//	int 			t[2] = {206, 177};
	int				i;
	unsigned long	l;
	char			*str;

	//	char* l = setlocale(LC_ALL, "");
	printf("\n%d\n", ft_printf("s: %s, p: %p, d:%d", "a string", &main, 42));
	printf("\n%d\n", printf("s: %s, p: %p, d:%d", "a string", &main, 42));
	printf("\n%d\n", ft_printf("%s%p%d%d%p%s%p%p%s", "a", &free, 1, 2, &malloc, "b", &free, &malloc, "c"));
	printf("\n%d\n", printf("%s%p%d%d%p%s%p%p%s", "a", &free, 1, 2, &malloc, "b", &free, &malloc, "c"));
	printf("\n%d\n", ft_printf("%p", NULL - 1));
	printf("\n%d\n", printf("%p", NULL - 1));
	return (0);
}
