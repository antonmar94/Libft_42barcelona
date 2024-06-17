/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:49:16 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/17 19:55:01 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	k = 0;
	l = ft_strlen(dst);
	if (l < dstsize)
	{
		i = ft_strlen(src) + l;
		if (dstsize > i + 1)
			j = i + 1;
		else
			j = dstsize;
		while (k + 1 < j - l)
		{
			(dst[l + k] = src[k]);
			k++;
		}
		(dst[l + k]) = '\0';
	}
	else
		i = ft_strlen(src) + dstsize;
	return (i);
}
