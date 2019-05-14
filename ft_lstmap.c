/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 20:40:52 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/13 03:47:55 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *c;
	t_list *res;
	t_list *begin;

	c = f(lst);
	if (!(res = ft_lstnew(c->content, c->content_size)))
		return (NULL);
	lst = lst->next;
	begin = res;
	while (lst)
	{
		c = f(lst);
		if (!(res->next = ft_lstnew(c->content, c->content_size)))
			return (NULL);
		res = res->next;
		lst = lst->next;
	}
	return (begin);
}
