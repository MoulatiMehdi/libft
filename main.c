/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:37:33 by mmoulati          #+#    #+#             */
/*   Updated: 2024/11/14 10:28:48 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	*ft_long_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	*p;
	size_t	j;
	size_t	max;

	i = size * count / sizeof(p[0]);
	j = (size * count) % sizeof(p[0]);
	p = malloc(size * count);
	while (j--)
		((char *)p)[i * sizeof(p[0]) + j] = 0;
	while (i--)
		p[i] = 0;
	return (p);
}

int	main(void)
{
	size_t	size;
	size_t	count;
	int		end;
	int		start;
	char	*p;
	char	*p1;

	size = INT_MAX;
	count = 2;
	start = clock(); // record the start time
	p = ft_long_calloc(count, size);
	end = clock();
	printf("%.2f\n", ((double)end - start) / CLOCKS_PER_SEC);
	p[0] = 1;
	start = clock(); // record the start time
	p1 = calloc(count, size);
	end = clock();
	printf("%.2f\n", ((double)end - start) / CLOCKS_PER_SEC);
	printf("%p %p", p, p1);
}
