/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:06:15 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/18 18:21:11 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




/*He cagado mierdas con mejor sintaxis que esto panadero*/



#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i++] - 48);
		if ((number * sign) > 2147483647)
			return (-1);
		if ((number * sign) < -2147483648)
			return (0);
	}
	return (number * sign);
}
