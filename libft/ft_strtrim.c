/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 07:22:21 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/20 18:00:05 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strstart(const char *s, const char *set)
{
	int		start;
	size_t	i;

	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(set, s[i]) != NULL)
		{
			i++;
			start++;
		}
		else
			break ;
	}
	return (start);
}

static int	strend(const char *s, const char *set)
{
	int		end;
	size_t	i;

	i = ft_strlen(s) - 1;
	end = 0;
	while (s[i] != '\0')
	{
		if (ft_strrchr(set, s[i]) != NULL)
		{
			i--;
			end++;
		}
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*str;
	int		i;

	end = strend (s1, set);
	start = strstart (s1, set);
	i = 0;
	if ((size_t)(end + start) >= ft_strlen(s1))
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	str = (char *) malloc (sizeof (char) * (ft_strlen(s1) - start - end +1));
	if (!str)
		return (NULL);
	while ((size_t)start < ((ft_strlen(s1)) - (size_t)end))
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
