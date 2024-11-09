/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:49:56 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/09 15:36:25 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;
	int				i;
	int				c;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = str[i] - '0';
		if (res > 922337203685477580 || (res == 922337203685477580 && c > 7))
			return (-1 + (sign == -1));
		res = 10 * res + c;
		i++;
	}
	return (res * sign);
}
