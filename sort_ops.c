/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:30:56 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/22 17:31:02 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *list)
{
	t_node	*first;
	t_node	*sec;
	t_node	*third;

	if (list->size < 2)
		return ;
	else
	{
		first = list->head;
		sec = first->next;
		third = sec->next;
		list->head = sec;
		first->next = third;
		sec->next = first;
		ft_printf("s%c\n", list->name);
	}
}

void	push(t_list *push, t_list *receive)
{
	t_node	*tmp;

	tmp = push->head;
	if (push->size > 0)
	{
		push->head = tmp->next;
		tmp->next = receive->head;
		receive->head = tmp;
		push->size--;
		receive->size++;
		ft_printf("p%c\n", receive->name);
	}
}

void	rotate(t_list *list)
{
	t_node	*first;
	t_node	*sec;
	t_node	*last;

	if (list->size < 2)
		return ;
	else
	{
		first = list->head;
		sec = first->next;
		last = list->tail;
		list->head = sec;
		last->next = first;
		first->next = NULL;
		list->tail = first;
		ft_printf("r%c\n", list->name);
	}
}

void	rev_rotate(t_list *list)
{
	t_node	*first;
	t_node	*sec_to_last;
	t_node	*last;

	if (list->size < 2)
		return ;
	else
	{
		first = list->head;
		sec_to_last = list->head;
		while (sec_to_last->next->next != NULL)
		{
			sec_to_last = sec_to_last->next;
		}
		last = list->tail;
		last->next = first;
		sec_to_last->next = NULL;
		list->tail = sec_to_last;
		list->head = last;
		ft_printf("rr%c\n", list->name);
	}
}
