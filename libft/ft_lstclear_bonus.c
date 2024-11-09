/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:51:48 by mmoulati          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2024/11/06 15:58:45 by mmoulati         ###   ########.fr       */
=======
/*   Updated: 2024/11/09 18:04:54 by mmoulati         ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
<<<<<<< Updated upstream
=======
	*lst = 0;
>>>>>>> Stashed changes
}
