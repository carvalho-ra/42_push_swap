#include "push_swap.h"


int sort_3(t_list *list)
{
    while (!(is_sorted(list)))
    {
        if ((list->head->data > list->tail->data) && 
            (list->tail->data > list->head->next->data))
            rotate(list);
        else if (list->head->data > list->head->next->data)
            swap(list);
        else
            rev_rotate(list);
    }
    return (0);
}
