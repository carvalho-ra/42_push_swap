include "push_swap.h"

int find_min_data(t_list *list_a, t_list *list_b)
{
    t_node  *curr;

    curr = list_a->head;
    while (curr)
    {
        if (curr->data > curr->next->data)
            res = curr->next->data;
    }
    return (0);
}
