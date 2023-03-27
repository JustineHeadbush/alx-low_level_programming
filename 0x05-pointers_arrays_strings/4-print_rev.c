#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string that will be printed.
 */
void print_rev(char *s)
{
	int length = 0, n;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (n = length; n > 0; n--)
	{
		_putchar(s[n]);
		s--;
	}
	_putchar('\n');
}

