/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:46:19 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/26 16:39:59 by rcarvalh         ###   ########.fr       */
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
