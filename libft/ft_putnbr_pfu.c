/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pfu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:03:17 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 08:39:15 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_pfu(unsigned int c)
{
	char	*s;
	int		len;

	s = ft_itoa_pfu(c);
	len = ft_putstr_pf(s);
	free(s);
	return (len);
}
