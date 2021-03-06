/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 21:48:12 by dfouquet          #+#    #+#             */
/*   Updated: 2017/04/14 21:58:33 by dfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*link;
	t_list	*next_link;
	t_list	*first_link;

	if (!lst)
		return (NULL);
	link = (*f)(lst);
	first_link = link;
	lst = lst->next;
	while (lst)
	{
		next_link = (*f)(lst);
		lst = lst->next;
		link->next = next_link;
		link = next_link;
	}
	return (first_link);
}
