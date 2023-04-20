#include "push_swap.h"

int sort_3(t_list *list_a, t_list *list_b)
{
    t_node  *first;
    t_node  *sec;
    t_node  *third;

    (void)list_b;
    first = list_a->head;
    sec = list_a->head->next;
    third = list_a->head->next->next;
    //case1: if (2 - 1 - 3) - sa
    if ((third->data > first->data) && (first->data > sec->data))
        swap(list_a);
    //case2: if (3 - 2 - 1) - sa - rra
    if ((first->data > sec->data) && (sec->data > third->data))
    {
        swap(list_a);
        rev_rotate(list_a);
    }
    //case3: if (3 - 1 - 2) - ra
    if ((first->data > third->data) && (third->data > sec->data))
        rotate(list_a);
    //case4: if (1 - 3 - 2) - sa - ra
    if ((sec->data > third->data) && (third->data > first->data))
    {
        swap(list_a);
        rotate(list_a);
    }
    //case5: if (2 - 3 - 1) - rra
    if ((sec->data > first->data) && (first->data > third->data))
        rev_rotate(list_a);
    return (0);
}
