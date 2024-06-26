/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:37:38 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 12:07:23 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wcounter(char const *str, char c)
{
	size_t	i;
	int		wcount;

	wcount = 0;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			wcount++;
		i++;
	}
	return (wcount);
}

char	**free_matrix(char **matrix)
{
	char	**matrix_aux;

	matrix_aux = matrix;
	while (*matrix)
	{
		free(*matrix);
		matrix++;
	}
	free(matrix_aux);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		wcount;
	char	**str;
	size_t	a;

	i = -1;
	j = -1;
	wcount = wcounter(s, c);
	str = malloc(sizeof(char *) * (wcount + 1));
	if (str == NULL)
		return (str);
	while (++j < wcount)
	{
		a = i + 1;
		while (s[++i] == c && i < ft_strlen(s))
			a++;
		while (s[i] != c && i < ft_strlen(s))
			i++;
		str[j] = ft_substr(s, a, i - a);
		if (!str[j])
			return (free_matrix(str));
	}
	str[j] = 0;
	return (str);
}
