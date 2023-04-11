#ifndef LINKED_LIST_H
# define LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

//data
typedef struct  s_node
{
    int     value;
    struct s_node   *next;
}
t_node;

//function prototypes

//create list
t_node	*create_list(void);
 
//destroy list
void	destroy_list_iterative(t_node **list);
void	destroy_list_recursive(t_node *list);

 
//print list
void	print_list_iterative(t_node *list);
void	print_list_recursive(t_node *list);

//add nodes
void	add_top(t_node **list, int x);
void	add_bottom(t_node **list, int x);

//remove nodes
//void	remove_top(t_node *list);
//void	remove_bottom(t_node *list);
//void	remove_value(t_node *list, int x);

//search list
//int	search_value(t_node *list, int x);

#endif