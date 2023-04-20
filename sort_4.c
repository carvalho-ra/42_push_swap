#include "push_swap.h"

int sort_4(t_list *list_a, t_list *list_b)
{
    while (list_a->head->data > list_a->head->next->data ||
        list_a->head->next->data > list_a->head->next->next->data ||
        list_a->head->next->next->data > list_a->head->next->next->next->data)
    {
        swap(list_a);
        push(list_a, list_b);
        sort_3(list_a, list_b);
        push(list_b, list_a);
    }
    return (0);
}
