#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string that will be printed.
 */
void print_rev(char *s)
{
	int length = 0, n;

	while (*s)
	{
		s++;
		length++;
	}

	while (length >= 0)
	{
		s--;
		n = *s;
		n++;
		--length;
	}
}
