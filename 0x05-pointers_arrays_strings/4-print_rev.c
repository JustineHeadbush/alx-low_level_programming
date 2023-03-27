#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string that will be printed.
 */
void print_rev(char *s)
{
	int n = 0;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}

	for (n--; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
