/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:03:51 by eamghar           #+#    #+#             */
/*   Updated: 2022/10/26 15:32:25 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*temp;

	i = 0;
	temp = (char *)s;
	cc = (char)c;
	if (!cc)
		return (temp + ft_strlen(temp));
	while (temp[i])
	{
		if (cc == temp[i])
			return (&temp[i]);
		i++;
	}
	return (NULL);
}
