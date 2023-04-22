#include "push_swap.h"

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
    ft_printf("\n");
    print_list(list_a);
    if (list_a->size == 3)
        sort_3(list_a);
    if (list_a->size == 4)
        sort_4(list_a, list_b);
    if (list_a->size == 5)
        sort_5(list_a, list_b);
    print_list(list_a);
    ft_printf("\n");
    return (0);
}
