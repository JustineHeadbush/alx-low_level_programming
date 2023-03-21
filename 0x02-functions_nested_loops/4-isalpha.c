#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 * @c: The character being checked
 * Return: 1 if c is letter, lowercase or uppercase. Otherswise, return 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
