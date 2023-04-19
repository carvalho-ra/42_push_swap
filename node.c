#include "push_swap.h" 

//node creation
t_node  *create_node(int data)
{
    //declare a pointer to structure node
    t_node  *new_node;
    //malloc space for a new node
    if (!(new_node = (t_node *)malloc(sizeof(t_node))))
    //check if malloc returns a valid space
        return (NULL);
    //the field data receives data passed in the function
    new_node->data = data;
    //the node points to the next node (NULL)
    new_node->next = NULL;
    //returns a pointer to a s_node structure
    return (new_node);
}

//add a node to the begining of the list
void    add_node_top(t_list *list, int data)
{
    //create a new node
    t_node  *new_node = create_node(data);

    //if list is empty
    if (list->head == NULL)
    {
        //s_node_create already creates a node pointing to NULL
        list->head = new_node;
        list->tail = new_node;
        list->size++;
    }
    //if list is not empty
    else
    {
        //new_node must point to where head of the list is pointing
        new_node->next = list->head;
        //now head of the list can point to the added node
        list->head = new_node;
        list->size++;
    }
    //in both cases the code works because if the list is empty it points to NULL
    //and first line of else does exactly that
}

//add node to the end of the list
void    add_node_bottom(t_list *list, int data)
{
    //create a pointer to nodes
    //s_node  *tmp;
    //create a new node
    t_node  *new_node = create_node(data);

    //this tmp pointer points to the same place as the head of the list (first element)
    //for a list without tail
    //tmp = list->head;

    //if the list is empty
    if (list->head == NULL)
    {
        //the pointer to the list points to the new node created
        list->head = new_node;
        list->tail = new_node;
        list->size++;
    }
    else
    {
        //iterate trought the list until it finds the last node (list without tail)
        //while (tmp->next != NULL)
        //{
        //    tmp = tmp->next;
        //}
        //here the pointer tmp points to the last node
        //make it point to the new node created
        //tmp->next = new_node;
        list->tail->next = new_node;
        list->tail = new_node; //list->tail->next;
        list->size++;
    }
}

