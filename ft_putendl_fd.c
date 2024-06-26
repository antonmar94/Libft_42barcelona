/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:56:30 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 16:56:32 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}
