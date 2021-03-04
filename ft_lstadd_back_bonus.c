/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:52:46 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/21 21:27:42 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	i = *lst;
	while (i->next)
	{
		i = i->next;
	}
	i->next = new;
}
