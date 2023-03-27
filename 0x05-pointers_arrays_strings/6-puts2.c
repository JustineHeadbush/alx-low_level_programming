#include "main.h"
/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int n = 0, length = 0;

	while (str[n++])
		length++;

	for (n = 0; n < length; n += 2)
		_putchar(str[n]);

	_putchar('\n');
}
