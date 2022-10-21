#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc(sizeof(**range) * (max - min));
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		ptr[i++] = min;
		min++;
	}
	*range = ptr;
	return (i);
}
