/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:19:30 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/10 12:19:30 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (size < start)
		start = size;
	if (size - start < len)
		len = size - start;
	p = malloc(len * sizeof(char) + 1);
	if (p == 0)
		return (0);
	ft_memcpy(p, s + start, len);
	p[len] = '\0';
	return (p);
}
