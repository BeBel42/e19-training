/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myputdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:13:07 by martin            #+#    #+#             */
/*   Updated: 2020/11/03 20:34:50 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnondec(double nb)
{
	char c;

	if (nb < 10.)
	{
		c = '0' + (int)nb;
		write(1, &c, 1);
	}
	else
	{
		putnondec(nb / 10.);
		c = '0' + ((unsigned long long)nb % 10ULL);
		write(1, &c, 1);
	}
}

void	putdec(double nb)
{
	int		i;
	char	c;

	nb -= (unsigned long long)nb;
	i = -1;
	while (++i < 6)
	{
		nb *= 10;
		c = '0' + (int)nb % 10;
		write(1, &c, 1);
	}
}

void	myputdouble(double nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	nb += .0000005;
	putnondec(nb);
	write(1, ".", 1);
	putdec(nb);
}
