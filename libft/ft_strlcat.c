/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:13:01 by mlefevre          #+#    #+#             */
/*   Updated: 2020/11/21 13:50:18 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static unsigned int	mystrlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int total;

	if (mystrlen(dest) < size)
		total = mystrlen(src) + mystrlen(dest);
	else
		total = size + mystrlen(src);
	while (*(dest++) && size)
		size--;
	dest--;
	i = 0;
	while (src[i] && i < size - 1 && size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = 0;
	return (total);
}
