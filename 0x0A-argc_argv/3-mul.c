#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: the number of argumemts
 * @argv: array of pointers
 * Return: 0 if two numbers are entered.
 * else print Error and  return 1.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);

	return (0);
}
