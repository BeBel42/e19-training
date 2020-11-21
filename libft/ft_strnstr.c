/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:35:35 by martin            #+#    #+#             */
/*   Updated: 2020/11/21 13:51:40 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	isfullword(const char *big, const char *little, size_t len)
{
	while (len && *big)
	{
		if (*big != *little)
			break ;
		len--;
		big++;
		little++;
	}
	return (*little == 0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == 0)
		return ((char *)big);
	while (len && *big)
	{
		if (*big == *little && isfullword(big, little, len))
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
