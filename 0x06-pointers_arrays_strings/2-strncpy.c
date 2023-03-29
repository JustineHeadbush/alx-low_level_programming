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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
