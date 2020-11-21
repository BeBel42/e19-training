/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 08:33:43 by mlefevre          #+#    #+#             */
/*   Updated: 2020/11/21 13:50:33 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static unsigned int	mystrln(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t				ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	if (!src)
	{
		dest = 0;
		return (0);
	}
	i = mystrln(src) + 1;
	j = -1;
	if (i < size)
		while (++j < i)
			dest[j] = src[j];
	else if (size)
	{
		while (++j < size - 1)
			dest[j] = src[j];
		dest[j] = 0;
	}
	return (i - 1);
}
