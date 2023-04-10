#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: the string
 * @accept: the set of bytes
 * Return: a pointer to the byte in @s
 * that matches one of the bytes in @accept
 * null if there are no matches
 */
char *_strpbrk(char *s, char *accept)
{
        int num1, num2;

        for (num1 = 0; s[num1] != '\0'; num1++)
        {
                for (num2 = 0; accept[num2] != 0; num2++)
                {
                        if (s[num1] == accept[num2])
                                return (s + num1);
                }
        }
        return (0);
}

