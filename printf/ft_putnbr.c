/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 18:14:51 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 17:13:07 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb)
{
	unsigned int	unb;
	char			c;

	unb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	if (unb < 10)
	{
		c = '0' + unb;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(unb / 10);
		c = '0' + (unb % 10);
		write(1, &c, 1);
	}
}
