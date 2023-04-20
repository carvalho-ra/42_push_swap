/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:02:08 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 08:39:10 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_pf(int c)
{
	char	*s;
	int		len;

	s = ft_itoa(c);
	len = ft_putstr_pf(s);
	free(s);
	return (len);
}
