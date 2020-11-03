/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:38:19 by martin            #+#    #+#             */
/*   Updated: 2020/11/02 15:55:02 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	gethex(int n)
{
	if (n < 10)
		return ('0' + n);
	else
		return ('a' + (n - 10));
}

void	myprintptr2(unsigned long ptr)
{
	char c;

	if (ptr < 16)
	{
		c = gethex(ptr);
		write(1, &c, 1);
	}
	else
	{
		myprintptr2(ptr / 16);
		c = gethex(ptr % 16);
		write(1, &c, 1);
	}
}

void	myprintptr(void *ptr)
{
	write(1, "0x", 2);
	myprintptr2((unsigned long)ptr);
}
