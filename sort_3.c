#include "push_swap.h"


int sort_3(t_list *list)
{
    t_node  *tmp;

    tmp = list->head;
    while (!(is_sorted(list)))
    {
        tmp = list->head;
        if ((tmp->data > tmp->next->data))
            swap(list);
        else
            rev_rotate(list);
    }
    return (0);
}
