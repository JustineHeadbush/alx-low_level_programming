#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: A buffer to copy the string to.
 * @src: The string to copy.
 *
 * Return: A pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}

	return (dest);
}
