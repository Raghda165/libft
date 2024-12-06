/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:31:22 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/21 14:37:26 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strlength(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	numofstrs(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

static void	*free_mem(char	**split, int j)
{
	while (j-- > 0)
		free(split[j]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = malloc (sizeof (char *) * ((numofstrs((char *)s, c)) + 1));
	if (!split)
		return (NULL);
	while (s[k] != '\0' && j < (numofstrs((char *)s, c)))
	{
		while (s[k] == c)
			k++;
		i = 0;
		split[j] = malloc (strlength((char *)(s + k), c) + 1);
		if (!split[j])
			return (free_mem (split, j));
		while (s[k] != c && s[k] != '\0')
			split[j][i++] = s[k++];
		split [j++][i] = '\0';
	}
	return (split[j] = NULL, split);
}
