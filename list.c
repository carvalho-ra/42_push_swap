#include "push_swap.h" 

//list creation (head)
t_list  *create_list(char name)
{
    //create a pointer (s_list type)
    t_list  *list;
    //malloc space for the pointer head of the list
    if(!(list = (t_list *)malloc(sizeof(t_list))))
    //check if malloc returns a valid space
        return (NULL);
    //list name receives a char
    list->name = name;
    //size on initialization is zero
    list->size = 0;
    //begining of the list points to NULL
    list->head = NULL;
    //end of the list points to NULL
    list->tail = NULL;
    //returns a pointer to a s_list type
    return (list);
}

//print list
void    print_list(t_list *list)
{
    //must have a temporary poiter to a node
    t_node  *tmp;

    //it must poit to the first node, same as list->head
    tmp = list->head;
    
    //for printing purposes, print begining of the list
    ft_printf("list_%c (size = %i)-> ", list->name, list->size);

    //while the tmp pointer in pointing to some node (there's a node in the list)
    while(tmp)
    {
        //access tha data in this node and print it
        ft_printf("%d -> ", tmp->data);
        //then, poit to the next node (same as next in this node)
        tmp = tmp->next;
    }
    //print the place where the last node is pointing 
    ft_printf("NULL\n");
}

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

int find_min_data(t_list *list)
{
    t_node  *current;
    int     min_data;

    current = list->head;
    min_data = current->data;
    while (current->next)
    {
        if (min_data > current->next->data)
            min_data = current->next->data;
        current = current->next;
    }
    return (min_data);
}
