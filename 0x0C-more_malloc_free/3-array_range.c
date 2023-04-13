#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array.
 * NULL if min > max or if it fails.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	a = 0;
	while (min <= max)
	{		
		ptr[a] = min;
		a++;
		min++;
	}
		return (ptr);
}
