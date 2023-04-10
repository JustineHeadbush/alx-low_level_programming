#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argv: the nummber of arguments
 * @argc: an array of pointers
 * Return: always 0
 */
int main(int argv, __attribute__((unused))char *argc[])
{
	printf("%d\n", argv);

	return (0);
}
