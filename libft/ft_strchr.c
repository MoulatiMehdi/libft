/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:19:03 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/10 13:02:12 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

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
