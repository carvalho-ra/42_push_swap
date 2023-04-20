#include "push_swap.h"

//argument is empty
int check_empty(int argc, char **argv)
{
    int i;

    i = 1;
    if (!(argv[i]))
        return (1);
    while (i < argc)
    {
    
        if (ft_strlen(argv[i]) == 0)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

//argument is digit (has char?)
int check_char(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            if(!(ft_isdigit(argv[i][j])))
            {
                if (!((argv[i][j] == '+' || argv[i][j] == '-') && (j == 0) && (ft_strlen(argv[i]) > 1)))
                {
                    return (1);
                }
            }
            j++;
        }
        i++;
    }
    return (0);
}
//int max and min
int check_max_min_int(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if(ft_atol(argv[i]) > 2147483648)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

//duplicated value
int check_dup(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_atol(argv[i]) == ft_atol(argv[j]))
            {
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}

//all validations
int validation(int argc, char **argv)
{
    if (check_empty(argc, argv) == 1)
    {
        ft_printf("empty argument\n");
        return (-1);
    }
    if(check_char(argc, argv) == 1)
    {
        ft_printf("argument has char\n");
        return (-2);
    }
    if (check_max_min_int(argc, argv) == 1)
    {
        ft_printf("argument has max or min int\n");
        return (-3);
    }
    if (check_dup(argc, argv) == 1)
    {
        ft_printf("argument has duplicate\n");
        return (-4);
    }
    return (0);
}
