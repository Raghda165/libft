/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:11:16 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/20 12:09:12 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	s;
	unsigned char	*str;
	size_t			i;

	i = 0;
	s = (unsigned char )c;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = s;
		i++;
	}
	return (str);
}
