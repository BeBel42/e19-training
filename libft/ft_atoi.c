/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 08:30:24 by mlefevre          #+#    #+#             */
/*   Updated: 2020/11/25 16:08:33 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		isnum(char c)
{
	return (c >= '0' && c <= '9');
}

static int		toint(char c)
{
	return (c - '0');
}

static int		iswhitespace(char c)
{
	return (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f' ||
			c == '\r');
}

static int		isoverflow(unsigned long long r, int s)
{
	if (s == 1 && r >= 9223372036854775808ULL)
		return (-1);
	if (r >= 9223372036854775809ULL)
		return (0);
	return (1);
}

int				ft_atoi(const char *str)
{
	unsigned long long	r;
	int					s;

	r = 0;
	s = 1;
	while (*str && iswhitespace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str && isnum(*str))
	{
		r *= 10;
		r += toint(*str);
		if (!isoverflow(r, s) || isoverflow(r, s) == -1)
			return (isoverflow(r, s));
		str++;
	}
	return (r * s);
}
