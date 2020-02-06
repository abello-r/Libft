/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 18:35:49 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/24 15:18:59 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		len;
	size_t		c1;
	size_t		c2;

	c1 = 0;
	if (!src)
		return (0);
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	c2 = dstsize - 1;
	while (c2 > 0 && src[c1] != '\0')
	{
		dst[c1] = src[c1];
		c1++;
		c2--;
	}
	dst[c1] = '\0';
	return (len);
}
