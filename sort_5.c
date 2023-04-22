#include "push_swap.h"

int sort_5(t_list *list_a, t_list *list_b)
{
    int     min;

    min = find_min_data(list_a);
    ft_printf("min = %i\n", min);
    while(list_a->head->data != min)
        rotate(list_a);
    push(list_a, list_b);
    min = find_min_data(list_a);
    while(list_a->head->data != min)
        rotate(list_a);
    push(list_a, list_b);
    sort_3(list_a);
    push(list_b, list_a);
    push(list_b, list_a);
    return (0);
    //erro, 13 acoes para 3 5 4 2 1 
}
