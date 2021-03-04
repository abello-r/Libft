/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abello-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:49:42 by abello-r          #+#    #+#             */
/*   Updated: 2020/01/13 14:41:14 by abello-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char x, int fd)
{
	write(fd, &x, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * -1;
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar(i % 10 + 48, fd);
}
