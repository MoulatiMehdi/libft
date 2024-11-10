/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:19:28 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/10 13:00:14 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	c = (char)c;
	while (str[i])
		i++;
	while (1)
	{
		if (str[i] == c)
			return ((char *)str + i);
		if (!i)
			break ;
		i--;
	}
	return (0);
}
