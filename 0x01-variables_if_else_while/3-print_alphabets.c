#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * Description: 'Prints alphabet in lower and uppercase'
  * Return: 0
  */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{

		putchar(a);
		a++;
	} while (b <= 90)
	{

		putchar(b);
		b++;
	}
		putchar('\n');
		return (0);
}
