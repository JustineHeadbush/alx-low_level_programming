#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random passwords
 * Return: always 0
 */
int main(void)
{
	 srand(time(0));

	 int num1 = rand() % 200;

			printf("%d", num1);
	return (0);
}
