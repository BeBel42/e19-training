/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:38:59 by martin            #+#    #+#             */
/*   Updated: 2020/11/21 13:47:15 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	const size_t max = nmemb * size;
	size_t i;
	unsigned char *ptr;

	if (!(ptr = malloc(max)))
		return (0);
	i = -1;
	while (++i < max)
		ptr[i] = 0;
	return (ptr);
}
