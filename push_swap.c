/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:26:38 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/27 13:04:45 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	which_sort(t_list *list_a, t_list *list_b)
{
	if (list_a->size == 3)
		sort_3(list_a);
	else if (list_a->size == 4)
		sort_4(list_a, list_b);
	else if (list_a->size == 5)
		sort_5(list_a, list_b);
	else
		radix(list_a, list_b);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		i;

	if (validation(argc, argv) != 0)
		return (1);
	list_a = create_list('a');
	list_b = create_list('b');
	i = 1;
	while (i < argc)
	{
		add_node_bottom(list_a, ft_atol(argv[i]));
		i++;
	}
	if (!is_sorted(list_a))
		which_sort(list_a, list_b);
	del_list(list_a);
	del_list(list_b);
	return (0);
}
