/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:09:25 by mlefevre          #+#    #+#             */
/*   Updated: 2020/11/21 13:51:13 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n || (!*s1 && !*s2))
		return (0);
	if (*s1 == *s2)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
