/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:43:52 by martin            #+#    #+#             */
/*   Updated: 2020/11/22 17:56:17 by martin           ###   ########.fr       */
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

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*r;
	size_t			l;

	if (!s)
		return (0);
	l = mystrlen(s);
	if (!(r = malloc(l + 1)))
		return (0);
	i = -1;
	while (++i < l)
		r[i] = f(i, s[i]);
	r[i] = 0;
	return (r);
}
