/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:02:38 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/15 18:19:32 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst_head;
	t_list	*newlst_it;

	newlst_head = (void *)0;
	if (!f)
		return ((void *)0);
	if (lst)
	{
		newlst_head = ft_lstnew((*f)(lst->content));
		if (!newlst_head)
			return ((void *)0);
		newlst_it = newlst_head;
		while (lst->next != (void *)0)
		{
			newlst_it->next = ft_lstnew((*f)(lst->next->content));
			if (!newlst_it->next)
			{
				ft_lstclear(&newlst_head, del);
				return ((void *)0);
			}
			newlst_it = newlst_it->next;
			lst = lst->next;
		}
	}
	return (newlst_head);
}
