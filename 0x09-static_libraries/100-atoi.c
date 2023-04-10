#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: the string
 * Return: integer value of the string
 */
int _atoi(char *s)
{
        unsigned int sign = 1, n = 0;

        do {
                if (*s == '-')
                        sign *= -1;
                else if (*s >= '0' && *s <= '9')
                        n = (n * 10) + (*s - '0');
                else if (n > 0)
                        break;
}
        while (*s++);

        return (n * sign);
}

