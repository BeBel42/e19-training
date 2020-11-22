/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:16:05 by martin            #+#    #+#             */
/*   Updated: 2020/11/22 18:18:41 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr_fd(int nb, int fd)
{
	unsigned int	unb;
	char			c;

	unb = nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		unb = -nb;
	}
	if (unb < 10)
	{
		c = '0' + unb;
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(unb / 10, fd);
		c = '0' + (unb % 10);
		write(fd, &c, 1);
	}
}
