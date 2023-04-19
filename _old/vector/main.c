#include <stdio.h>
#include "vector.h"

int	main(void)
{
	vector	*vec;
	vec = create_vector(100);
	int	i;
	int	num;

	i = 1;
	scanf("%d", &num);
	while(i <= num)
	{
		add_vector(vec, i);
		i++;
	}
	i = len(vec);
	while (len(vec) != 0)
	{
		printf("%d -> ", access_vector(vec, 0));
		remove_vector(vec, 0);
	}
	printf("FIM\n");
	destroy_vector(vec);
	return (0);
}
