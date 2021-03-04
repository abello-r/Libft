/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:47:55 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/21 19:05:22 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*new;

	if (!l)
		return (NULL);
	new = ft_lstnew(f(l->content));
	if (!(new))
		return (NULL);
	x = new;
	while (l)
	{
		if (l->next)
		{
			new->next = ft_lstnew(f(l->next->content));
			if (!(new->next))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			new = new->next;
		}
		l = l->next;
	}
	new->next = NULL;
	return (x);
}
