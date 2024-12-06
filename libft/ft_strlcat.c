/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:02:47 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/21 14:37:55 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	length;
	size_t	dl;

	i = 0;
	j = 0;
	dl = ft_strlen(dst);
	length = ft_strlen(src) + ft_strlen(dst);
	if (dl < dstsize)
	{
		while (dst[j] != '\0')
			j++;
		while ((src[i] != '\0') && (i < (dstsize - dl - 1)))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (length);
	}
	else
		return (dstsize + ft_strlen(src));
}
