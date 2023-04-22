#include "push_swap.h"

int sort_5(t_list *list_a, t_list *list_b)
{
    int     min;

    min = find_min_data(list_a);
    while(list_a->head->data != min)
    {
        if (list_a->head->data > list_a->head->next->data)
            swap(list_a);
        else
            rev_rotate(list_a);
    }
    push(list_a, list_b);
    sort_4(list_a, list_b);
    push(list_b, list_a);
    return (0);
}