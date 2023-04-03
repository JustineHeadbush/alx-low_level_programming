#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: the memory area to be copied to
 * @src: the memory area to be copied from
 * @n: number of bytes to be copied
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num = 0;

	while (num < n)
	{
		dest[num] = src[num];
	}
	num++;
	return (dest);
}

