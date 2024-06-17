/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:37:38 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/17 19:42:38 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wcounter(char const *s, char c)
{
	size_t	i;
	int		wcount;

	wcount = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wcount++;
		i++;
	}
	return (wcount);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		wcount;
	char	**str;
	int		a;

	i = -1;
	j = -1;
	if (!s)
		return (0);
	wcount = wcounter(s, c);
	str = calloc(wcount + 1,  sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (++j < wcount)
	{
		a = i + 1;
		while (s[++i] == c && i < ft_strlen(s))
			a++;
		while (s[i] != c && i < ft_strlen(s))
			i++;
		str[j] = ft_substr(s, a, i - a);
	}
	str[j] = 0;
	return (str);
}
