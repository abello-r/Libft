/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:05:09 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/26 12:11:28 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *needle, size_t len)
{
	size_t	c;

	if (*needle == 0 || h == needle)
		return ((char *)h);
	c = ft_strlen(needle);
	while (*h && c <= len--)
	{
		if (!(ft_strncmp((char *)h, (char *)needle, c)))
			return ((char *)h);
		h++;
	}
	return (NULL);
}
