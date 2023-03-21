#include "main.h"
/**
 * print_alphabet_x10 - check the code
 * Description: prints alphabet 10 times.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char l;

	while (count++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
