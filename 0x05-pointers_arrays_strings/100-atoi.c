#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: the string
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int num = 0;

	for (int i = 0; s[i] != '\0'; i++)
		num = num * 10 + (s[i] - 0);

	return (num);
}
