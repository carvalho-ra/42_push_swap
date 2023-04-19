#include "push_swap.h"

//print list
void    print_list(t_list *list)
{
    //must have a temporary poiter to a node
    t_node  *tmp;

    //it must poit to the first node, same as list->head
    tmp = list->head;
    
    //for printing purposes, print begining of the list
    printf("list_%c -> ", list->name);

    //while the tmp pointer in pointing to some node (there's a node in the list)
    while(tmp)
    {
        //access tha data in this node and print it
        printf("%d -> ", tmp->data);
        //then, poit to the next node (same as next in this node)
        tmp = tmp->next;
    }
    //print the place where the last node is pointing 
    printf("NULL\n");
}

int main(int ac, char **av)
{
    t_list  *list_a;
    t_list  *list_b;
    int i;

    list_a = create_list('a');
    list_b = create_list('b');
    i = 1;
    while (i < ac)
    {
        add_node_bottom(list_a, ft_atoi(av[i]));
        i++;
    }
    swap(list_a);
    print_list(list_a);
    print_list(list_b);
}
