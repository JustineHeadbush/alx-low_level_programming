#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int n, multi, res;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			res = n * multi;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
