/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:26:27 by eamghar           #+#    #+#             */
/*   Updated: 2022/10/26 12:07:29 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*array;
	unsigned char	cc;

	i = 0;
	array = (unsigned char *)s;
	cc = (unsigned char) c;
	while (i < n)
	{
		if (cc == array[i])
			return (&array[i]);
		i++;
	}
	return (NULL);
}
