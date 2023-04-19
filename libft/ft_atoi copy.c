/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:19:47 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/19 17:06:37 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(const char *str)
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
