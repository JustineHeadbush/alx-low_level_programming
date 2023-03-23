#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int diag;
	int line;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (line = 0; line < diag; line++)
				_putchar(' ');
			_putchar('\\');

			if (diag == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
