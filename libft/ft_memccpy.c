/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:31:32 by martin            #+#    #+#             */
/*   Updated: 2020/11/21 13:53:24 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = dest;
	p2 = src;
	while (n--)
	{
		*(p1++) = *(p2++);
		if (*(p1 - 1) == (unsigned char)c)
			return (p1);
	}
	return (0);
}
