/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:15:05 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/06 18:31:23 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (1)
	{
		if (str[i] == c)
			return ((char *)str + i);
		if (!str[i])
			break ;
		i++;
	}
	return (0);
}
