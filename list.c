/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:57:27 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/26 14:43:22 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_list	*create_list(char name)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!(list))
		return (NULL);
	list->name = name;
	list->size = 0;
	list->head = NULL;
	list->tail = NULL;
	return (list);
}

void	print_list(t_list *list)
{
	t_node	*tmp;

	tmp = list->head;
	ft_printf("list_%c (size = %i)-> ", list->name, list->size);
	while (tmp)
	{
		ft_printf("%d(index = %d) -> ", tmp->data, tmp->index);

		tmp = tmp->next;
	}
	ft_printf("NULL\n");
}

int	is_sorted(t_list *list)
{
	t_node	*tmp;

	tmp = list->head;
	while (tmp)
	{
		if (tmp->next)
		{
			if (tmp->data > tmp->next->data)
				break ;
		}
		tmp = tmp->next;
	}
	if (!(tmp))
		return (1);
	return (0);
}

int	find_min_data(t_list *list)
{
	t_node	*current;
	int		min_data;

	current = list->head;
	min_data = current->data;
	while (current->next)
	{
		if (min_data > current->next->data)
			min_data = current->next->data;
		current = current->next;
	}
	return (min_data);
}

void	del_list(t_list *list)
{
	while (list->head != NULL)
	{
		del_node_top(list);
	}
	free(list);
}
