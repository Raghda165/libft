/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:42:24 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/20 12:25:50 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*source;
	char		*dest;

	source = (const char *)src;
	dest = (char *)dst;
	if (!dest && !source)
		return (NULL);
	if (source < dest)
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
