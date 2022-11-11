/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:05:34 by eamghar           #+#    #+#             */
/*   Updated: 2022/11/09 15:28:20 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*element;

	lst_new = NULL;
	while (lst && f)
	{
		element = ft_lstnew (f(lst->content));
		if (!element)
		{
			ft_lstclear (&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back (&lst_new, element);
		lst = lst->next;
	}
	return (lst_new);
}
