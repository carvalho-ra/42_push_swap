/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 22:08:14 by rodrigo           #+#    #+#             */
/*   Updated: 2023/04/19 22:10:20 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atol(const char *str)
{
	long int		result;
	size_t	count;
	int		sign;

	sign = 1;
	result = 0;
	count = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (ft_isdigit(str[count]) == 1)
	{
		result = (result * 10) + (str[count] - '0');
		if (result > 2147483647 || result < -2147483648)
		{
			return (2999999999);
		}
		count++;
	}
	return (result * sign);
}
