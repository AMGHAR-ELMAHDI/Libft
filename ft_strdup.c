/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:06:43 by eamghar           #+#    #+#             */
/*   Updated: 2022/10/26 15:33:11 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p1;
	char	*p2;
	size_t	i;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)malloc((ft_strlen(p1) + 1) * sizeof(char));
	if (!p2)
		return (NULL);
	while (i < ft_strlen(p1))
	{
		p2[i] = p1[i];
		i++;
	}
	p2[i] = '\0';
	return (p2);
}
