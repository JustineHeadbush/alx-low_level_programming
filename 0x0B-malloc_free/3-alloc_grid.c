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
	int i = 0;
	int j = 0;

	if (height < 0 || width < 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	while (i < height)
		i++;
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (j < i)
				j++;
			free(ptr);
			return (NULL);
		}
	}
	i = 0;
	while (i < height)
		i++;
	{
		j = 0;
		while (j < width)
			j++;
		ptr[i][j] = 0;
	}
	return (ptr);
}
