/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:27:53 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/25 19:28:52 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_numlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res_num;
	int		len;
	int		sign;

	sign = 1;
	if (nbr < 0)
		sign = -1;
	len = ft_numlen(nbr);
	res_num = malloc(sizeof(char) * (len + 1));
	if (res_num == NULL)
		return (NULL);
	if (nbr < 0)
		res_num[0] = '-';
	else if (nbr == 0)
		res_num[0] = '0';
	res_num[len] = '\0';
	while (nbr != 0)
	{
		len--;
		res_num[len] = sign * (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res_num);
}
