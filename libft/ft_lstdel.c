/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 21:31:28 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 21:43:48 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*link;
	t_list	*next_link;

	if (!alst)
		return ;
	link = *alst;
	while (link)
	{
		next_link = link->next;
		ft_lstdelone(&link, del);
		free(link);
		link = next_link;
	}
	*alst = NULL;
}
