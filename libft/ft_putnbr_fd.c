/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:13:29 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/06 23:30:10 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		power;
	char	c;

	if (fd < 0)
		return ;
	nbr = n;
	power = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr / power >= 10)
		power *= 10;
	while (power)
	{
		c = '0' + nbr / power;
		write(fd, &c, 1);
		nbr %= power;
		power /= 10;
	}
}