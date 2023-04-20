#include "push_swap.h"

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
        j = 0;
        while (argv[j])
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
    if(check_char(argc, argv) == 0)
    {
        if (check_max_min_int(argc, argv) == 0)
        {
            if (check_dup(argc, argv) == 0)
            {
                return (0);
            }
        }
    }
    return (1);
}
