#include "push_swap.h"

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

int main(int argc, char **argv)
{
    if (validation(argc, argv) != 0)
        return (1);

    t_list  *list_a;
    t_list  *list_b;
    
    int i;

    list_a = create_list('a');
    list_b = create_list('b');
    i = 1;
    while (i < argc)
    {
        add_node_bottom(list_a, ft_atol(argv[i]));
        i++;
    }
    print_list(list_a);
    swap(list_a);
    print_list(list_a);
    rotate(list_a);
    print_list(list_a);
    rev_rotate(list_a);
    print_list(list_a);
    push(list_b, list_a);
    print_list(list_a);
    print_list(list_b);
    push(list_a, list_b);
    print_list(list_a);
    print_list(list_b);
    push(list_a, list_b);
    print_list(list_a);
    print_list(list_b);
}
