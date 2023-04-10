#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string that @src will be appened to
 * @src: string to be appened to @dest
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
        int i = 0, length = 0;

        while (dest[i++])
        {
                length++;
        }

        for (i = 0; src[i]; i++)
        {
                dest[length + i] = src[i];
        }
        return (dest);
}

