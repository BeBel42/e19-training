/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 20:20:26 by martin            #+#    #+#             */
/*   Updated: 2020/11/22 18:39:36 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const int		s = (src > dest) * 2 - 1;
	void *const		r = dest;
	size_t			i;

	if (!dest && !src)
		return (dest);
	if (s < 0)
	{
		dest = ((unsigned char *)dest) + (n - 1);
		src = ((const unsigned char *)src) + (n - 1);
	}
	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i * s] = ((const unsigned char *)src)[i * s];
	return (r);
}
