/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:09:32 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/21 13:58:33 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	resisneglong(size_t i, long result, const char *str, int sign)
{
	if ((((result == 922337203685477580) && (str[i] > '8') && (sign == -1)))
		|| ((result > 922337203685477580) && (sign == -1)))
	{
		return (1);
	}
	return (0);
}

int	resisposlong(size_t i, long result, const char *str, int sign)
{
	if ((((result == 922337203685477580) && (str[i] > '7')) && (sign == 1))
		|| ((result > 922337203685477580) && (sign == 1)))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (resisneglong(i, result, str, sign))
			return (0);
		else if (resisposlong(i, result, str, sign))
			return (-1);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
