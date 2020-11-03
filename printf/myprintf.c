/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:01:00 by martin            #+#    #+#             */
/*   Updated: 2020/11/03 20:37:27 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "myheader.h"

void	writewithpercent(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
}

void	myprintf(const char *str, ...)
{
	va_list	args;
	char	c;

	va_start(args, str);
	while (*str)
	{
		if (*str++ == '%')
			if (*str == 'i' || *str == 'd')
				ft_putnbr(va_arg(args, int));
			else if (*str == 's')
				ft_putstr(va_arg(args, char *));
			else if (*str == 'p')
				myprintptr(va_arg(args, void *));
			else if (*str == 'f')
				myputdouble(va_arg(args, double));
			else if (*str == 'c' && !(0 & (c = va_arg(args, int))))
				write(1, &c, 1);
			else
				writewithpercent(*str);
		else
			write(1, --str, 1);
		str++;
	}
	va_end(args);
}
