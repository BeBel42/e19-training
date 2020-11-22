/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:22:31 by mlefevre          #+#    #+#             */
/*   Updated: 2020/11/22 16:08:44 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			ft_is_separator(char c, char charset)
{
	return (c == charset);
}

static int			ft_wordlen(const char *str, char charset)
{
	int i;

	i = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
		i++;
	return (i);
}

static int			ft_wordcount(const char *str, char charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		i = ft_wordlen(str, charset);
		if (i)
			j++;
		str += i;
	}
	return (j);
}

static char			*ft_mallocstring(const char *src, int n)
{
	char *dest;

	if (!(dest = malloc(n + 1)))
		return (NULL);
	dest[n] = 0;
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char		**ft_split(char const *str, char charset)
{
	unsigned int	n;
	char			**r;
	int				rsize;
	int				i;

	if (!str)
		return (NULL);
	rsize = ft_wordcount(str, charset);
	if (!(r = malloc((rsize + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (i < rsize)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		n = ft_wordlen(str, charset);
		if (!(r[i] = ft_mallocstring(str, n)))
			return (NULL);
		str += n;
		i++;
	}
	r[rsize] = 0;
	return (r);
}
