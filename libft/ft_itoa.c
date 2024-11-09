/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:15:41 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/05 20:40:01 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*p;
	int				power;
	unsigned int	len;
	long			nbr;

	len = n < 0;
	nbr = n * (-2 * (len++) + 1);
	power = 1;
	while (nbr / power >= 10)
	{
		power *= 10;
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	p[len] = 0;
	while (len--)
	{
		p[len] = '0' + nbr % 10;
		nbr /= 10;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}