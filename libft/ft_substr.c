/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:39:36 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/20 13:35:47 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) <= len)
		len = ft_strlen(s + start);
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	substring = (char *) malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	while (s[start] != '\0' && i < len)
	{
		substring [i] = s[start];
		i++;
		start ++;
	}
	substring[i] = '\0';
	return (substring);
}
