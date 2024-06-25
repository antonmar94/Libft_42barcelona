/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:40:53 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/25 19:11:38 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	int		s_len;

	i = 0;
	s_len = ft_strlen(s) - start;
	if (s_len <= 0)
		s_len = 0;
	if ((unsigned int)s_len < len)
		len = (unsigned int)s_len;
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
