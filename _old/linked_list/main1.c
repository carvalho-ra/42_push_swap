#include "linked_list.h"

int main(void)
{
    int num;

    num = 15;
    t_node  *list = create_list();
    
    print_list_iterative(list);

    while (num > 0)
    {
        add_top(&list, num--);
    }
    print_list_recursive(list);
    destroy_list_iterative(&list);
    print_list_iterative(list);

    return (0);
}