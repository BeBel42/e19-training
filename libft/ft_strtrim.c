/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:16:22 by martin            #+#    #+#             */
/*   Updated: 2020/11/22 18:36:11 by martin           ###   ########.fr       */
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

static int		isinset(char c, char const *set)
{
	while (*set++)
		if (*(set - 1) == c)
			return (1);
	return (0);
}

static size_t	gettrimlen(char const *s1, char const *set)
{
	size_t				b;
	size_t				e;
	const char *const	beg = s1;

	b = 0;
	e = 0;
	while (*s1 && isinset(*s1, set))
	{
		s1++;
		b++;
	}
	while (*s1)
	{
		if (isinset(*s1, set))
			e++;
		else
			e = 0;
		s1++;
	}
	return (mystrlen(beg) - b - e);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	malsize;
	char	*r;
	size_t	i;

	if (!s1 || !set)
		return (0);
	malsize = gettrimlen(s1, set);
	if (!(r = malloc(malsize + 1)))
		return (0);
	while (*s1 && isinset(*s1, set))
		s1++;
	i = 0;
	while (malsize--)
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = 0;
	return (r);
}
