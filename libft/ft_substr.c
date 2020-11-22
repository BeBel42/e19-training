/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:19:16 by martin            #+#    #+#             */
/*   Updated: 2020/11/22 18:43:08 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	mystrlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	if (start >= mystrlen(s))
	{
		if (!(str = malloc(1)))
			return (0);
		str[0] = 0;
		return (str);
	}
	if (!(str = malloc(len + 1)))
		return (0);
	i = -1;
	while (++i < len)
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}
