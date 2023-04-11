#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string that will be copied
 * Return: NULL if str == NULL. Pointer to duplicated string if successful
 */
char *_strdup(char *str)
{
	char ptr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		 j++;
		i++;

	ptr = malloc((j + 1) * sizeof(char));
	
	if (ptr == '\0')
		return (NULL);

	while (str[i] != '\0')
		i++;
	ptr[i] = str[i];
	return (ptr);
}
