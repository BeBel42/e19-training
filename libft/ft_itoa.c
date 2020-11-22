/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:11:56 by martin            #+#    #+#             */
/*   Updated: 2020/11/22 16:58:43 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void fillr(unsigned int un, char *r, int *i)
{
	if (un < 10)
	{
		r[*i] = un + '0';
		(*i)++;
	}
	else
	{
		fillr(un / 10, r, i);
		r[*i] = un % 10 + '0';
		(*i)++;
	}
}

char		*ft_itoa(int n)
{
	const int		n2 = n;
	int				i;
	char			*r;
	unsigned int	un;

	i = (n <= 0);
	while (n)
	{
		n /= 10;
		i++;
	}
	if (!(r = malloc(i + 1)))
		return (0);
	i = 0;
	un = n2;
	if (n2 < 0)
	{
		un = -n2;
		r[0] = '-';
		i++;
	}
	fillr(un, r, &i);
	r[i] = 0;
	return (r);
}
