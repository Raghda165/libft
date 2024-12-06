/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:29:01 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/20 17:14:17 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list**lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*temp;

	list = *lst;
	while (list != NULL)
	{
		temp = list -> next;
		ft_lstdelone(list, del);
		list = temp;
	}
	*lst = NULL;
	free(*lst);
}
