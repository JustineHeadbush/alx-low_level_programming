#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: 'prints numbers of base 16 in lowercase'
 * Return: 0
 */
int main(void)
{
	int n = 48;
	char l = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
