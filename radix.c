#include "push_swap.h"

void	swap_bubble(t_node *current)
{
	t_node	*first;
	t_node	*sec;

    first = current;
    sec = current->next;

    current->next = sec->next;
    sec->next = current;
    current = sec;
}

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
    t_node *tmp;
    t_node *tmp2;

    
    bubble = create_list('c');
    cp_list(list_a, bubble);
    


    tmp = bubble->head;
    while (tmp->next)
    {
        tmp2 = tmp;
        while (tmp2->next)
        {
            if (tmp2->data > tmp2->next->data)
            {
                swap_bubble(tmp2);
            }
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    print_list(bubble);
}


void radix(t_list *list_a, t_list *list_b)
{
    (void)list_b;
    bubble_sort(list_a);
}