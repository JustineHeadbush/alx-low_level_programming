#include "main.h"
/**
 * find_length_of_string - measures the length of the string
 * @s: the string that will be measured
 * Return: length of string
 */
int find_length_of_string(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else if (*s != '\0')
	{
		n++;
		s++;
	}
		return (n);
}

/**
 * find_palindrome - finds out if a string is a palindrome
 * @s: the string that will be checked
 * @a: the left index
 * @b: the right index
 * Return: 1 if string is palindrome, otherwise return 0
 */
int find_palindrome(int a, int b, char *s)
{
	if (a == b || a >= b)
	{
		return (1);
	}
	else if (s[a] != s[b])
	{
		return (0);
	}
	return (find_palindrome(a + 1, b - 1, s));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string that will be checked
 * Return: 1 if string is palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	int n = find_length_of_string(s);

	if (*s == '\0')
	{
		return (1);
	}
	return (find_palindrome(s, n - 1));
}
