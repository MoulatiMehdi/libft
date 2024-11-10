/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:18:40 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/10 12:18:40 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	if (size && count && count > SIZE_MAX / size)
		return (0);
	p = malloc(size * count);
	if (!p)
		return (0);
	while (i < count * size)
		p[i++] = 0;
	return (p);
}
