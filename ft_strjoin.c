/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:58:02 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 16:58:03 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*scopy;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	scopy = (void *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!scopy)
		return (NULL);
	while (i < ft_strlen(s1))
		scopy[i++] = s1[j++];
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
		scopy[i++] = s2[k++];
	scopy[i] = '\0';
	return (scopy);
}
