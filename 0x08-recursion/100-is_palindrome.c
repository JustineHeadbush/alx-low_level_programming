#include "main.h"
/**
 * find_length_of_string - measures the length of the string
 * @s: the string that will be measured
 * Return: the length of the string
 */
int find_length_of_string(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (find_length_of_string(s + 1));
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
	int n = find_length_of_string(s + 1);
	int a = 0;
	int b = n - 1;

	if (a == b || a < b)
	{
		return (1);
	}
	else if (*s[a] != *s[b])
	{
		return (0);
	}
	return (find_palindrome(a + 1, b - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string that will be checked
 * Return: 1 if string is palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (find_palindrome);
}
