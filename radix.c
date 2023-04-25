#include "push_swap.h"

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

void    index_list(t_list *bubble, t_list *list_a)
{
    int        i;
    t_node    *temp;
    t_node  *temp2;

    temp = list_a->head;
    while (temp)
    {
        i = 0;
        temp2 = bubble->head;
        while (temp2)
        {
            if (temp->data == temp2->data)
            {
                temp->index = i;
                break ;
            }
            temp2 = temp2->next;
            i++;
        }
        temp = temp->next;
    }
}

void bubble_sort(t_list *list_a)
{
    t_list *bubble;
    t_node *tmp;
    int aux;
    unsigned int i;
    unsigned int j;

    i = 0;
    bubble = create_list('c');
    cp_list(list_a, bubble);
    print_list(bubble);
    write (1, "bubble\n", 7);
    while (i < bubble->size - 1)
    {
        tmp = bubble->head;
        j = 0;
        while (j < bubble->size - i - 1)
        {
            if (tmp->data > tmp->next->data)
            {
                aux = tmp->data;
                tmp->data = tmp->next->data;
                tmp->next->data = aux;
            }
            j++;
                    // print_list(bubble);
                    // write (1, "\n", 1);
            tmp = tmp->next;
        }
        i++;
    }
    print_list(bubble);
    index_list(bubble, list_a);
    print_list(list_a);
}

void radix(t_list *list_a, t_list *list_b)
{
    (void)list_b;
    bubble_sort(list_a);
}