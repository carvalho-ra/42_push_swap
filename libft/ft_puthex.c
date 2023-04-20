/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:10:47 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 08:39:03 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(unsigned int c)
{
	int	index;

	index = 0;
	if (c == 0)
		return (1);
	while (c > 0)
	{
		c = c / 16;
		index++;
	}
	return (index);
}

static char	*ft_hex_str(unsigned int c, char *n_hex)
{
	int		len;
	char	*hex;

	len = ft_count_len(c);
	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (NULL);
	hex[len] = '\0';
	while (len > 0)
	{
		hex[len - 1] = n_hex[c % 16];
		c = c / 16;
		len--;
	}
	return (hex);
}

int	ft_puthex(unsigned int c, char *n_hex)
{
	char		*hex;
	int			len;

	hex = ft_hex_str(c, n_hex);
	len = ft_putstr_pf(hex);
	free (hex);
	return (len);
}
