#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 * Return: NULL if width and height < 0.
 * NULL if it fails. Pointer to array if successful
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			j = 0;
			while (j < i)
			free(ptr[j]);
				j++;
		}
		free(ptr);
		return (NULL);
	}
	j = 0;
	while (i < height)
	{
		ptr[i][j] = 0;
			j++;
	}
	i++;

return (ptr);
}
