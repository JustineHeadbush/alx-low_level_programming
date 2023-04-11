#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string s2 will be added to.
 * @s2: string that will be added to s1
 * Return: NULL if it fails. Pointer to newly allocated memory if successful.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	ptr = malloc(j * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	ptr[index++] = s1[i];

	j = 0;
	while (s2[j] != 0)
	ptr[index++] = s2[i];

	return (ptr);
}
