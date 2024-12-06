/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:35:23 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/20 17:49:47 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node ;
	t_list	*inc ;
	t_list	*list;

	inc = lst;
	list = NULL;
	while (inc)
	{
		node = malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		node -> content = f(inc -> content);
		node -> next = NULL;
		ft_lstadd_back(&list, node);
		inc = inc -> next;
	}
	return (list);
}
