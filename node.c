/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:00:37 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/22 18:14:43 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!(new_node))
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_top(t_list *list, int data)
{
	t_node	*new_node;

	new_node = create_node(data);
	if (list->head == NULL)
	{
		list->head = new_node;
		list->tail = new_node;
		list->size++;
	}
	else
	{
		new_node->next = list->head;
		list->head = new_node;
		list->size++;
	}
}

void	add_node_bottom(t_list *list, int data)
{
	t_node	*new_node;

	new_node = create_node(data);
	if (list->head == NULL)
	{
		list->head = new_node;
		list->tail = new_node;
		list->size++;
	}
	else
	{
		list->tail->next = new_node;
		list->tail = new_node;
		list->size++;
	}
}

void	del_node_top(t_list *list)
{
	t_node	*del_node;

	if (list->head == NULL)
		return ;
	del_node = list->head;
	list->head = list->head->next;
	free(del_node);
	list->size--;
}
