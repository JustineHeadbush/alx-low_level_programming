#include "main.h"
/**
 * _strspn - the length of a prefix substring
 * @s: the string
 * @accept: the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
        int num1 = 0, num2, num3;

        for (num2 = 0; s[num2] != '\0'; num2++)
        {
                for (num3 = 0; accept[num3] != '\0'; num3++)
                {
                        if (s[num2] == accept[num3])
                        {
                                num1++;
                        }
                        if (s[num2] != accept[num3])
                                return (num1);
                }
        }
        return (num1);
}
