#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string that will be printed.
 */
void print_rev(char *s)
{
	int length = 0;
	int n;

	while (s[n++])
		length++;

	for (n = length - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}

