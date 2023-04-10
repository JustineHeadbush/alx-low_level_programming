#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 if succesful.
 * Print error and return 1 if symbols are not digits.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int sum = 0;
	int count = 1;

	while (count < argc)
	{
		if (atoi(argv[count]) > 0)
		{
			sum = sum + atoi(argv[count]);
		}
		else if (atoi(argv[count]) < 0 || atoi(argv[count]) > 9)
		{
			printf("Error\n");
			return (1);
		}
	}
	count++;
	printf("%d\n", sum);
	return (0);
}

