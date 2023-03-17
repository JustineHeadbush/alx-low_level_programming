#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints all possible different combinations of two two-digits.
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 9 && b == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
