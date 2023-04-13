#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string that s2 will be added to
 * @s2: string that will be added to s1
 * @n: the number of bytes
 * Return: Pointer. Else NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		j++;
		i++;
	}
	ptr = malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
	ptr[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
	ptr[j++] = s2[i];
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
