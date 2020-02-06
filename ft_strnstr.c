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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t c;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	c = ft_strlen(needle);
	while (*haystack && c <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, c)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
