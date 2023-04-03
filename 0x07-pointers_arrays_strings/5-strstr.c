#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string that will be searched
 * @needle: the string that will be searched for
 * Return: a pointer to the beginning of the located substring,
 * NULL if there is no match
 */
char *_strstr(char *haystack, char *needle)
{
	int num1, num2;

	for (num1 = 0; needle[num1] != '\0'; num1++)
	{
		for (num2 = 0; haystack[num2] != '\0'; num2++)
		{
			if (needle[num1] == haystack[num2])
				return (needle + num1);
		}
		if (needle[num1] == '\0')
			return (haystack);
	}
	return (0);
}
