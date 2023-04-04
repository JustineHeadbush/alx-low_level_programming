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

	for (num1 = 0; haystack[num1] != '\0'; num1++)
	{
		num2 = 0;
		for ( ; needle[num2] != '\0'; num2++)
		{
			if (haystack[num1] == needle[num2])
				return ('\0');
		}
		if (needle[num2] == '\0')
			return (haystack + num1);
	}
	return (0);
}
