/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pfu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:04:34 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 08:43:16 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dig(unsigned int n)
{
	unsigned int	digits;
	long int		n_tmp;

	digits = 0;
	n_tmp = n;
	if (n <= 0)
	{
		digits = 1;
		n_tmp = n_tmp * (-1);
	}
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa_pfu(unsigned int n)
{
	char			*nbr;
	unsigned int	digits;
	long int		n_tmp;

	n_tmp = n;
	if (n_tmp < 0)
		n_tmp = n_tmp * (-1);
	digits = dig(n);
	nbr = malloc (sizeof(char) * digits + 1);
	if (!nbr)
		return (NULL);
	nbr[digits] = '\0';
	while (digits > 0)
	{
		digits--;
		nbr[digits] = (n_tmp % 10) + 48;
		n_tmp = n_tmp / 10;
	}
	if (n_tmp < 0)
		nbr[0] = '-';
	return (nbr);
}
