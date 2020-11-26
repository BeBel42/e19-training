/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:14:57 by martin            #+#    #+#             */
/*   Updated: 2020/11/25 20:31:26 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;
	t_list	*n;

	r = 0;
	while (lst)
	{
		if (!(n = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&r, del);
			return (0);
		}
		ft_lstadd_back(&r, n);
		lst = lst->next;
	}
	return (r);
}
