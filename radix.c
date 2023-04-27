/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:27:54 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/27 10:22:36 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*cp_list(t_list *list)
{
	t_list	*new_list;
	t_node	*tmp;

	new_list = create_list('c');
	tmp = list->head;
	while (tmp)
	{
		add_node_bottom(new_list, tmp->data);
		tmp = tmp->next;
	}
	return (new_list);
}

t_list	*index_list(t_list *bubble_sorted_list, t_list *list_a)
{
	int		i;
	t_node	*temp;
	t_node	*temp2;

	temp = list_a->head;
	while (temp)
	{
		i = 0;
		temp2 = bubble_sorted_list->head;
		while (temp2)
		{
			if (temp->data == temp2->data)
			{
				temp->index = i;
				break ;
			}
			temp2 = temp2->next;
			i++;
		}
		temp = temp->next;
	}
	del_list(bubble_sorted_list);
	return (list_a);
}

t_list	*bubble_sort(t_list *list)
{
	t_node			*tmp;
	int				aux;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < list->size - 1)
	{
		tmp = list->head;
		j = 0;
		while (j < list->size - i - 1)
		{
			if (tmp->data > tmp->next->data)
			{
				aux = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = aux;
			}
			j++;
			tmp = tmp->next;
		}
		i++;
	}
	return (list);
}

void	radix(t_list *list_a, t_list *list_b)
{
	unsigned int	bit;
	unsigned int	i;
	unsigned int	size;

	bit = 0;
	i = 0;
	index_list(bubble_sort(cp_list(list_a)), list_a);
	while (((list_a->size - 1) >> bit) != 0)
		++bit;
	while (i < bit)
	{
		size = list_a->size;
		while (size > 0)
		{
			if ((((list_a->head->index) >> i) & 1) == 1)
				rotate(list_a);
			else
				push(list_a, list_b);
			size--;
		}
		while (list_b->size > 0)
			push(list_b, list_a);
		i++;
	}
}
