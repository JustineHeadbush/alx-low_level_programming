#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of array
 * @c: char array will be initialized with
 * Return: pointer if successful. NULL if unsuccessful.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
		i++;
	ptr[i] = c;
	return (ptr);
}
