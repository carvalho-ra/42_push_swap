/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:12:52 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 08:39:21 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(unsigned long c)
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

static char	*ft_hex_str(unsigned long c, char *n_hex)
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

int	ft_putptr(void *c, char *n_hex)
{
	char			*hex;
	int				len;
	unsigned long	n;

	n = (unsigned long)c;
	hex = ft_hex_str(n, n_hex);
	len = ft_putstr_pf(hex);
	free (hex);
	return (len);
}