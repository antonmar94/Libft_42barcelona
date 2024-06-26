/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:40:53 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 11:33:06 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sizestr(char const *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	size_t	s_len;

	i = 0;
	if (start > ft_sizestr(s))
		s_len = 0;
	else
		s_len = ft_sizestr(s) - start;
	if (s_len < len)
		len = s_len;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (res);
	ft_bzero(res, len + 1);
	if (start >= ft_strlen((char *) s))
		return (res);
	s += start;
	while (i < (int)len && s[i])
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
