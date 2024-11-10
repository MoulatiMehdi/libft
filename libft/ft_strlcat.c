/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:19:06 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/10 12:19:06 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	dstsize -= dst_len + 1;
	if (dstsize > src_len)
		dstsize = src_len;
	i = 0;
	while (i < dstsize)
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[dst_len + dstsize] = '\0';
	return (src_len + dst_len);
}
