#include "push_swap.h"

//sa (swap a): Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.
//sb (swap b): Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one or no elements.

void    swap(t_list *list)
{
    t_node  *tmp;

    tmp = list->head;
    if (list->head == NULL)
        return ;
    else if (list->head->next == NULL)
        return ;
    else
    {
        list->head->next = tmp->next->next;
        tmp->next->next = list->head->next;
        list->head = tmp;
    }
}