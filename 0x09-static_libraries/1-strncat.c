#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string @src will be appended to
 * @src: string from which @n characters will be appended
 * @n: number of characters to be appended from @src
 * Return: a pointer to to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int i = 0, length = 0;

        while (dest[i++])
        {
                length++;
        }

        for (i = 0; src[i] && i < n; i++)
        {
                dest[length + i] = src[i];
        }

        return (dest);
}

