/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:31:32 by martin            #+#    #+#             */
/*   Updated: 2020/11/21 13:52:56 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	if (!dest && !src)
		return (dest);
	i = 0;
	while (i != n)
	{
		((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
		i++;
	}
	return (dest);
}
