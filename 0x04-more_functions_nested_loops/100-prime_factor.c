#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the largest prime
 * factor of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	int m;

	while (m < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (m = 3; m < (n / 2); m += 2)
		{
			if ((n % m) == 0)
				n /= m;
		}
	}

	printf("%ld\n", n);
	return (0);
}

