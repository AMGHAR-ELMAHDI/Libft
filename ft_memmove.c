/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:20:07 by eamghar           #+#    #+#             */
/*   Updated: 2022/10/27 12:57:59 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdest;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	if (!cdest && !csrc)
		return (NULL);
	if (csrc > cdest)
		ft_memcpy (dest, src, len);
	else
	{
		while (len--)
			cdest[len] = csrc[len];
	}
	return (dest);
}
