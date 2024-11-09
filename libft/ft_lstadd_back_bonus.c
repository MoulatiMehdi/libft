/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:38:40 by mmoulati          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2024/11/06 17:47:49 by mmoulati         ###   ########.fr       */
=======
/*   Updated: 2024/11/09 17:59:58 by mmoulati         ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		(*lst = new);
		return ;
	}
	p = *lst;
	while (p->next)
		p = p->next;
	p->next = new;
}
