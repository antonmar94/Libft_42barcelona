/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:56:57 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/27 12:24:42 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	size;
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	size = ft_strlen(s);
	while (i < size)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
