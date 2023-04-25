#include "push_swap.h"

void	del_node_last(t_list *list)
{
	t_node	*del_node;

	if (list->head == NULL)
		return ;
    // del_node points to the head of the list
    del_node = list->head;
    // walk through the entire list to find second to last node
    while (del_node->next != NULL)
    {
        del_node = del_node->next;
    }
	del_node->next = del_node;
    // tail points to the end of the list
    list->tail = del_node;
	free(del_node);
	list->size--;
}
