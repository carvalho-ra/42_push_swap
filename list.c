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
