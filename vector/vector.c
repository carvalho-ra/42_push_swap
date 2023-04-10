#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

vector  *create_vector(int len)
{
    vector *v;
    v = (vector *) malloc(sizeof(vector));
    v->data = (int *) malloc (len * sizeof(int));
    v->n = 0;
    return (v);
}

void    destroy_vector (vector *v)
{
    free(v->data);
    free(v);
}

void    add_vector(vector *v, int x)
{
    v->data[v->n] = x;
    v->n = v->n + 1;
}

void    remove_vector(vector *v, int i)
{
    v->data[i] = v->data[v->n - 1];
    v->n = v->n - 1;
}

int access_vector(vector *v, int i)
{
    return (v->data[i]);
}

int len(vector *v)
{
    return (v->n);
}

int	search(vector *v, int x)
{
	int	i;

	i = 0;
	while (i < v->n)
	{
		if (v->data[i] == x)
		{
			return (i);
		}
	}
	return (1);
}