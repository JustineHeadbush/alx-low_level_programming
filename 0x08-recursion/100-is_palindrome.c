#include "main.h"
/**
 * find_palindrome - finds out if a string is a palindrome
 * @s: the string that will be checked
 * @a: the left index
 * @b: the right index
 */
int find_palindrome(int a, int b, char *s)
{
	int a = 0, int b = n - 1;

	if (a == b || a < b)
	{	
		return (1);
	}
	else if (*s[a] != *s[b])
	{
		return (0);
	}
	return (find_palindrome(a + 1, b - 1));
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string that will be checked
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (find_palindrome);
}
