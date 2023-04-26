#include "push_swap.h"

//cp_list returns the new list copied
t_list  *cp_list(t_list *list)
{
    t_list  *new_list;
    t_node  *tmp;

    new_list = create_list('c');
    tmp = list->head;
    while (tmp)
    {
        add_node_bottom(new_list, tmp->data);
        tmp = tmp->next;
    }
    return (new_list);
}

//indexes one list according to another one
//returns the indexed list
//free the other list
t_list  *index_list(t_list *bubble, t_list *list_a)
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
    del_list(bubble);
    write (1, "\ndeleted_list\n", 14);
    print_list(bubble);
    write (1, "\nindexed_list\n", 14);
    print_list(list_a);
    return (list_a);
}

//bubble sort a list and returns it 
t_list  *bubble_sort(t_list *list)
{
    t_list *bubble;
    t_node *tmp;
    int aux;
    unsigned int i;
    unsigned int j;

    i = 0;
    bubble = cp_list(list);
    write (1, "\noriginal_list\n", 15);
    print_list(list);
    write (1, "\ncopied_list\n", 13);
    print_list(bubble);
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
            tmp = tmp->next;
        }
        i++;
    }
    write (1, "\nsorted_list\n", 13);
    print_list(bubble);
    return (bubble);
}

void radix(t_list *list_a, t_list *list_b)
{
    t_node  *tmp_a;

    tmp_a = list_a->head;
    index_list(bubble_sort(list_a), list_a);
    while (tmp_a)
    {
        if (tmp_a->data % 10 == 0)
        {
            push(list_a, list_b);
        }
        else
        {
            rotate(list_a);
        }
        tmp_a = tmp_a->next;
    }
    print_list(list_a);
    print_list(list_b);
}