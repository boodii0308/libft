/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 20:40:52 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/14 21:42:03 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *begin;

	if (!lst)
		return (NULL);
	begin = (*f)(lst);
	head = begin;
	while (lst->next)
	{
		lst = lst->next;
		if (!(node->next = (*f)(lst)))
		{
			free(node->next);
			return (NULL);
		}
		node = node->next;
	}
	return (head);
}
