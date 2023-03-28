#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random passwords
 * Return: always 0
 */
int main(void)
{
	int i, n = 10;

	srand((unsigned int) time(0));

	for (i = 0; i < n; i++)
		printf("%d\n", rand() % 201);

	return (0);
}
