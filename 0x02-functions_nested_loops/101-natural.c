#include <stdio.h>
/**
 * main - check the code
 * Description: prints all the natural numbers that are multiple of 3 or 5
 *		below 1024.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int res = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			res += i;
	}

	printf("%d\n", res);

	return (0);
}
