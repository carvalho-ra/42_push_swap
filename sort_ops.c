#include "push_swap.h"

//sa (swap a): Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.
//sb (swap b): Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one or no elements.
void    swap(t_list *list)
{
    t_node  *first;
    t_node  *sec;
    t_node  *third;

    if (list->size < 2)
        return ;
    else
    {
        //first node
        first = list->head;
        //second node
        sec = first->next;
        //third node
        third = sec->next;
        //head of the list points to the second node
        list->head = sec;
        //old second node points to the third node 
        first->next = third;
        //old third node points to the first node
        sec->next = first;
        //print swap a or b
        ft_printf("s%c\n", list->name);
    }
}

//ss : sa and sb at the same time.
void    swap_both(t_list *list_a, t_list *list_b)
{
    swap(list_a);
    swap(list_b);
    ft_printf("ss\n");
}

//pa (push a): Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.
//pb (push b): Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void    push(t_list *push, t_list *receive)
{
    t_node  *tmp;

    tmp = push->head;
    if (push->size > 0)
    {
        push->head = tmp->next;
        tmp->next = receive->head;
        receive->head = tmp;
        push->size--;
        receive->size++;
        //print pa or pb
        ft_printf("p%c\n", receive->name);
    }
}

//ra (rotate a): Shift up all elements of stack a by 1.
//The first element becomes the last one.
//rb (rotate b): Shift up all elements of stack b by 1.
//The first element becomes the last one.
void    rotate(t_list *list)
{
    t_node  *first;
    t_node  *sec;
    t_node  *last;
    
    if (list->size < 2)
        return ;
    else
    {
        //first node
        first = list->head;
        //second node
        sec = first->next;
        //last node
        last = list->tail;
        //head of the list points to second node
        list->head = sec;
        //last node points to the first node
        last->next = first;
        //new first node is now the last node and points to NULL
        first->next = NULL;
        //new last node is the old first (head of the list)
        list->tail = first;
        //print rev rotate a ou b
        ft_printf("r%c\n", list->name);
    }
}

//rr : ra and rb at the same time.
void    rotate_both(t_list *list_a, t_list *list_b)
{
    rotate(list_a);
    rotate(list_b);
    ft_printf("rr\n");
}

//rra (reverse rotate a): Shift down all elements of stack a by 1.
//The last element becomes the first one.
//rrb (reverse rotate b): Shift down all elements of stack b by 1.
//The last element becomes the first one.
void    rev_rotate(t_list *list)
{
    t_node  *first;
    t_node  *sec_to_last;
    t_node  *last;
    
    if (list->size < 2)
        return ;
    else
    {
        //first node
        first = list->head;
        //second to last node
        sec_to_last = list->head;
        //loop to find second to last node
        while (sec_to_last->next->next != NULL)
        {
            sec_to_last = sec_to_last->next;
        }
        //last node
        last = list->tail;
        last->next = first;
        sec_to_last->next = NULL;
        list->tail = sec_to_last;
        list->head = last;
        //print rev rotate a ou b
        ft_printf("rr%c\n", list->name);
    }
}

//rrr : rra and rrb at the same time.
void    rev_rotate_both(t_list *list_a, t_list *list_b)
{
    rev_rotate(list_a);
    rev_rotate(list_b);
    ft_printf("rrr\n");
}
