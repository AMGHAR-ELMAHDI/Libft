/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:00:32 by eamghar           #+#    #+#             */
/*   Updated: 2022/10/27 11:46:54 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*temp;
	char	*result;
	char	cc;

	result = 0;
	temp = (char *)str;
	cc = (char)c;
	i = 0;
	if (!cc)
		return (temp + ft_strlen(temp));
	while (temp[i])
	{
		if (cc == temp[i])
			result = &temp[i];
		i++;
	}
	return (result);
}
