/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:37:38 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/27 14:17:46 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wcounter(char const *matrix, char c)
{
	size_t	i;
	int		wcount;

	wcount = 0;
	i = 0;
	while (i < ft_strlen(matrix))
	{
		if (matrix[i] != c && (i == 0 || matrix[i - 1] == c))
			wcount++;
		i++;
	}
	return (wcount);
}

static char	**free_matrix(char **matrix)
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
	char	**matrix;
	size_t	a;

	i = -1;
	j = -1;
	wcount = wcounter(s, c);
	matrix = malloc(sizeof(char *) * (wcount + 1));
	if (matrix == NULL)
		return (matrix);
	while (++j < wcount)
	{
		a = i + 1;
		while (s[++i] == c && i < ft_strlen(s))
			a++;
		while (s[i] != c && i < ft_strlen(s))
			i++;
		matrix[j] = ft_substr(s, a, i - a);
		if (!matrix[j])
			return (free_matrix(matrix));
	}
	matrix[j] = 0;
	return (matrix);
}
