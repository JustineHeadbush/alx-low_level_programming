#include <stdio.h>
/**
 * main - prints out all the arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);

	return (0);
}
