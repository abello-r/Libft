/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:47:25 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/10 13:47:14 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			x;

	i = 0;
	x = ((char)c);
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == x)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	if (i == 0)
	{
		if (s[i] == x)
			return (&((char *)s)[i]);
	}
	return (0);
}
