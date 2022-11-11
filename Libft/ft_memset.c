/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:59:31 by eamghar           #+#    #+#             */
/*   Updated: 2022/11/11 13:42:44 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	cc;

	i = 0;
	cc = c;
	p = s;
	while (i < n)
	{
		p[i] = cc;
		i++;
	}
	return (s);
}

int	main(void)
{
	int	*i;

	ft_memset(i, 57, 1);
	ft_memset((unsigned char *)i + 1, 5, 1);
	printf("%d\n", *i);
	return (0);
}
