/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:47:33 by mmoulati          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2024/11/06 15:55:56 by mmoulati         ###   ########.fr       */
=======
/*   Updated: 2024/11/09 18:03:55 by mmoulati         ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}