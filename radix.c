#include "push_swap.h"

// void	swap_bubble(t_node *current)
// {
// 	t_node	*first;
// 	t_node	*sec;

//     first = *current;
//     sec = (*current)->next;

//     first->next = sec->next;
//     sec->next = first;
//     *current = sec;
// }

void cp_list(t_list *list_a, t_list *list_c)
{
    t_node *tmp;

    tmp = list_a->head;
    while (tmp)
    {
        add_node_bottom(list_c, tmp->data);
        tmp = tmp->next;
    }
}

void bubble_sort(t_list *list_a)
{
    t_list *bubble;
    t_node *tmp2;
    int aux;
    unsigned int i;
    unsigned int j;

    i = 0;
    bubble = create_list('c');
    cp_list(list_a, bubble);
    while (i < bubble->size - 1)
    {
        tmp2 = bubble->head;
        j = 0;
        while (j < bubble->size - i - 1)
        {
            if (tmp2->data > tmp2->next->data)
            {
                // swap_bubble(&tmp2);
                aux = tmp2->data;
                tmp2->data = tmp2->next->data;
                tmp2->next->data = aux;
            }
            j++;
                    print_list(bubble);
                    write (1, "\n", 1);
            tmp2 = tmp2->next;
        }
        i++;
    }
    print_list(bubble);
}

//  index

void radix(t_list *list_a, t_list *list_b)
{
    (void)list_b;
    bubble_sort(list_a);
}