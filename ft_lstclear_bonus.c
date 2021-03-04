/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:42:35 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/21 21:58:30 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;

	if (!lst)
		return ;
	while (*lst)
	{
		x = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = x;
	}
}
