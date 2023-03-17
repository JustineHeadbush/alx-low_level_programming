#include <stdio.h>
/**
 * main - entry point
 * Description: 'Prints the alphabet except for q and e'
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		putchar(n);
	}
	putchar('\n');
	return (0);
}
