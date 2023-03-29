#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string that will be compared
 * @s2: string that will be compared
 * Return: 0 if strings are the same.
 * less than 0 if left string is less than right string.
 * more than 0 if left string is greater than right string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' &&  s2[i] != '\0')
		i++;
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		else if (s1[i] == s2[i])
			return (0);

		else
			return (s2[i] - s1[i]);
	}
}
