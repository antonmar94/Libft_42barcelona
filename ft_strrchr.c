/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:59:23 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 16:59:26 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int		i;
	int		flag;
	char	*s2;

	s2 = (char *)s;
	flag = -1;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == (char)c)
			flag = i;
		i++;
	}
	if ((s2[i] == '\0') && (char)c == '\0')
		flag = i;
	if (flag != -1)
		return (s2 + flag);
	else
		return (NULL);
}
