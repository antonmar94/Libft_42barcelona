/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:58:49 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 16:58:51 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	unsigned int	size;
	unsigned int	i;
	char			*scopy;

	if (f == NULL || s == NULL)
		return (NULL);
	size = ft_strlen (s);
	scopy = (char *)s;
	i = 0;
	scopy = (char *)malloc(sizeof(char) * (size + 1));
	if (scopy == NULL)
		return (NULL);
	while (i < size)
	{
		scopy[i] = f(i, s[i]);
		i++;
	}
	scopy[size] = '\0';
	return (scopy);
}
