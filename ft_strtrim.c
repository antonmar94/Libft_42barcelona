/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:59:36 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 16:59:38 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	size_t	lens1;

	start = 0;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	lens1 = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[start]) && s1[start] != '\0')
		start++;
	if ((s1[start]) == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, (int)(s1[lens1 - 1 - end]))
		&& s1[lens1 - 1 - end] != '\0')
		end++;
	return (ft_substr(s1, start, lens1 - start - end));
}
