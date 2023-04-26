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
t_list  *index_list(t_list *bubble_sorted_list, t_list *list_a)
{
    int        i;
    t_node    *temp;
    t_node  *temp2;

    temp = list_a->head;
    while (temp)
    {
        i = 0;
        temp2 = bubble_sorted_list->head;
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
    del_list(bubble_sorted_list);
    write (1, "\ndeleted_list\n", 14);
    print_list(bubble_sorted_list);
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
    unsigned int    bit;
    unsigned int    i;
    unsigned int    j;
    unsigned int size;

    size = list_a->size;
    bit = 0;
    i = 0;
    j = 0;
    index_list(bubble_sort(list_a), list_a);
    write (1, "\n- - - RADIX - - -\n\n", 20);
    print_list(list_a);
    print_list(list_b);
    tmp_a = list_a->head;
    //count number of bits of greater index
    while (((list_a->size - 1) >> bit) != 0)
        ++bit;
    //while i is less than the greater index
    while (i < bit)
    {
        size = list_a->size;
        //while there's a node in the list
        while (size > 0)
        {
            if ((((list_a->head->index) >> i) & 1) == 1)
                rotate(list_a);
            else
                push(list_a, list_b);
            size--;
        }
        print_list(list_a);
        print_list(list_b);
        while (list_b->size > 0)
            push(list_b, list_a);
        i++;
        print_list(list_a);
        print_list(list_b);
    }
    print_list(list_a);
    print_list(list_b);
}
