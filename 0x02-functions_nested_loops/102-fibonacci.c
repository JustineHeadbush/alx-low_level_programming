#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *	followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int count;
	int num1 = 0, num2 = 1, res;

	for (count = 0; count < 50; count++)
	{
		res = num1 + num2;
		printf("%d", res);

		num1 = num2;
		num2 = res;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
