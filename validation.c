#include "push_swap.h"

//is digit?
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
            if(!(ft_is_digit(argv[i][j])))
            {
                if (!((argv[i][j] == '+' || argv[i][j] == '-') && (j == 0) && (ft_strlen(argv[i][j] > 1))))
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
//elemento maior que o int
int chech_int(int argc, char **argv)
{

}

//valor duplicado

