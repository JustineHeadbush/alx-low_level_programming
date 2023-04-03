#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string that will be searched
 * @c: the character that will be searched for
 * Return: a pointer to the first occurence of the character 'c'
 * NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
	{
		if (s[num] == c)
			return (s);
		if (s[num] != c)
			num++;
	}
	return (0);
}
