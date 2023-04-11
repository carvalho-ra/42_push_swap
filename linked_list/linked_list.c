#include "linked_list.h"

t_node  *create_list(void)
{
    return (NULL);
}

void   destroy_list_iterative(t_node **list) //receives &list
{
    t_node  *tmp;
    while (*list != NULL)
    {
        tmp = *list;
        *list = (*list)->next;
        free(tmp);
    }
}

void    destroy_list_recursive(t_node *list)
{
    if (list != NULL)
    {
        destroy_list_recursive(list->next);
        free(list);
    }
    list = NULL;
}

void   print_list_iterative(t_node *list)
{
	t_node	*tmp;
	tmp = list;
	while (tmp != NULL)
	{
		printf("%d -> ", tmp->value);
		tmp = tmp->next;
	}
	printf("NULL\n");
}

void	print_list_recursive(t_node *list)
{
	if (list != NULL)
	{
		printf("%d -> ", list->value);
		print_list_recursive(list->next);
	}
	else
	{
		printf("NULL\n");
	}
}

void	add_top(t_node **list, int x) //receives adress of the list &list
{
	t_node	*new;

	new = (t_node *) malloc(sizeof(t_node));
	//check malloc
	new->value = x;
	new->next = *list;
	*list = new;
}

void	add_bottom(t_node **list, int x) // receives &list
{
	t_node	*new;
	t_node	*tmp;

	new = (t_node *) malloc(sizeof(t_node));
	//check malloc
	new->value = x;
	new->next = NULL;
	if (*list == NULL) //empty list
	{
		*list = new;
	}
	else
	{
		tmp = *list; //iterate through the list
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

