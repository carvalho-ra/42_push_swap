#include "push_swap.h"
#include <stdio.h>

void    print_list(t_node *node)
{
    while (node)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(int ac, char **av)
{
    t_node *head;
    int i;

    head = NULL;
    i = 1;
    while (i < ac)
    {
        add_node_bottom(&head, list(ft_atoi(av[i])));
        i++;
    }
    print_list(head);
}

