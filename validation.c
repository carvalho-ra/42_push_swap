/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:43:29 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/26 18:46:55 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_empty(int argc, char **argv)
{
	int	i;

	i = 1;
	if (!(argv[i]))
		return (1);
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_char(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j])))
			{
				if (!((argv[i][j] == '+' || argv[i][j] == '-') &&
					(j == 0) && (ft_strlen(argv[i]) > 1)))
				{
					write(2, "Error\n", 6);
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_max_min_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atol(argv[i]) > 2147483648)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
			{
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	validation(int argc, char **argv)
{
	if (check_empty(argc, argv) == 1)
		return (-1);
	if (check_char(argc, argv) == 1)
		return (-2);
	if (check_max_min_int(argc, argv) == 1)
		return (-3);
	if (check_dup(argc, argv) == 1)
		return (-4);
	return (0);
}
