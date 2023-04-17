#include "push_swap.h" 

t_node  *list(int data)
{
    t_node  *new;
    
    if (!(new = malloc(sizeof(t_node))))
        return (NULL);
    
    new->data = data;
    new->next = NULL;
    return (new);
}

void    add_node_bottom(t_node **head, t_node *node)
{
    t_node  *tmp;
    if (!node)
        return ;
    

    if (!*head)
    {
        *head = node;
        return ;
    }
    else
    {
        tmp = *head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
}