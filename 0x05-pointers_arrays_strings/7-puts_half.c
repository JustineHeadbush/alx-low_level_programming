#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string that will be printed.
 */
void puts_half(char *str)
{
	int n = 0, length = 0, m;

	while (str[n++])
		length++;

	if ((length % 2) == 0)
		m = length / 2;

	else
		m = (length + 1) / 2;

	for (n = m; n < length; n++)
		_putchar(str[n]);

	_putchar('\n');
}

