#include "main.h"
/**
 * cap_string - capitalizes the string
 * @str: the string
 * Return: 0
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	i++;
	return (0);
}
