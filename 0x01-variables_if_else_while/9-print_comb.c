#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: 'prints all possible combos of numbers'
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);


}
