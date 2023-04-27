/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:37:52 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/27 09:38:37 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_list *list)
{
	while (!(is_sorted(list)))
	{
		if ((list->head->data > list->tail->data)
			&& (list->tail->data > list->head->next->data))
			rotate(list);
		else if (list->head->data > list->head->next->data)
			swap(list);
		else
			rev_rotate(list);
	}
	return (0);
}

int	sort_4(t_list *list_a, t_list *list_b)
{
	int	min;

	min = find_min_data(list_a);
	while (list_a->head->data != min)
	{
		if (list_a->head->data > list_a->head->next->data)
			swap(list_a);
		else
			rev_rotate(list_a);
	}
	push(list_a, list_b);
	sort_3(list_a);
	push(list_b, list_a);
	return (0);
}

int	sort_5(t_list *list_a, t_list *list_b)
{
	int	min;

	min = find_min_data(list_a);
	while (list_a->head->data != min)
	{
		if (list_a->head->data > list_a->head->next->data)
			swap(list_a);
		else
			rev_rotate(list_a);
	}
	push(list_a, list_b);
	sort_4(list_a, list_b);
	push(list_b, list_a);
	return (0);
}
