#include "push_swap.h"

int is_sorted(t_list *list)
{
    t_node  *tmp;

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

int sort_3(t_list *list_a, t_list *list_b)
{
    (void)list_b;
    t_node  *tmp;

    tmp = list_a->head;
    while (!(is_sorted(list_a)))
    {
        tmp = list_a->head;
        if ((tmp->data > tmp->next->data))
            swap(list_a);
        else
            rev_rotate(list_a);
    }
    return (0);
}
