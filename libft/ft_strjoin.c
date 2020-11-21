/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:47:41 by martin            #+#    #+#             */
/*   Updated: 2020/11/21 21:01:55 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t	mystrlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t ss1;
	size_t ss2;
	size_t i;
	char *str;

	if (!s1 || !s2)
		return (0);
	ss1 = mystrlen(s1);
	ss2 = mystrlen(s2);
	if (!(str = malloc(ss1 + ss2 + 1)))
		return (0);
	i = -1;
	while (++i < ss1)
		str[i] = s1[i];
	i = -1;
	while (++i < ss2)
		str[ss1 + i] = s2[i];
	str[ss1 + i] = 0;
	return (str);
}
