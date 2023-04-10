#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int num = 0;

        while (num < n)
        {
                s[num] = b;
                num++;
        }
        return (s);
}

