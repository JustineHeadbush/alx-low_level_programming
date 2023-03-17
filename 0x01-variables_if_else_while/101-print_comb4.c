#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints all possible different combinations of 3 digits.
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
	for (c = 0; c < 10; c++)
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		putchar((c % 10) + '0');

	if (a == 9 && b == 9 && c == 9)
		continue;
	putchar(',');
	putchar(' ');
		}
		}
		}
	putchar('\n');
	return (0);
}
