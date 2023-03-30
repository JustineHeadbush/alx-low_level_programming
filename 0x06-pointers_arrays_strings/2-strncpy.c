#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: where @src will be copied to
 * @src: string from which characters will be copied
 * @n: number of characters copied from @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (src[i++])
		length++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = length; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
