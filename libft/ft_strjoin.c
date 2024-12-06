/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:07:53 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/21 14:37:43 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	str = (char *)malloc (sizeof(char) * (ft_strlen(s1)+ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		str[k] = s2[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
