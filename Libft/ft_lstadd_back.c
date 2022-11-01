/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:36:08 by eamghar           #+#    #+#             */
/*   Updated: 2022/10/25 12:27:11 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_lst;

	if (!lst || !new)
		return ;
	temp_lst = *lst;
	if (*lst)
	{
		while (temp_lst->next)
			temp_lst = temp_lst->next;
		temp_lst->next = new;
	}
	else
		*lst = new;
}
