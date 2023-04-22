#include "push_swap.h"

int sort_4(t_list *list_a, t_list *list_b)
{
    // t_node  *tmp;
    int     min;

    // tmp = list_a->head;
    min = find_min_data(list_a);
    while(list_a->head->data != min)
    {
        rotate(list_a);
//        tmp = list_a->head;
    }
    push(list_a, list_b);
    sort_3(list_a);
    push(list_b, list_a);
    return (0);
}
