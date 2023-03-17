#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
	for (m = 0; m < 10; m++)
	{
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');

		if (n == 9 && m == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);

}
