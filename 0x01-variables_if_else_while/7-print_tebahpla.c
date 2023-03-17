#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: 'prints alphabet in reverse'
 * Return: 0
 */
int main(void)
{
	char n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');
	return (0);
}
