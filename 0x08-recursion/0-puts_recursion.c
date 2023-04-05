#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string that will be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
