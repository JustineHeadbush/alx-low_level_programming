#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: array of elements amount
 * @size: size of array elements
 * Return: NULL if size or nmemb = 0. Pointer if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	a = 0;
	while (a < (size * nmemb))
		a++;
	ptr[a] = '\0';

		return (ptr);
}
