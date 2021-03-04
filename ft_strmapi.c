/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:03:50 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/17 13:34:22 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*x;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	x = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(x))
		return (NULL);
	while (i != ft_strlen(s))
	{
		x[i] = (*f)(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
