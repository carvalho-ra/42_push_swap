#ifndef VECTOR_H
# define VECTOR_H

//data
typedef struct
{
    int *data;
    int n;
} vector;

//functions prototypes
vector  *create_vector(int len);
void    destroy_vector (vector *v);
void    add_vector(vector *v, int x);
int access_vector(vector *v, int i);
void	remove_vector(vector *v, int i);
int len(vector *v);
int	search(vector *v, int x);

#endif
