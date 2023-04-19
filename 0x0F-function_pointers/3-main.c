#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the outcome.
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int __attribute__((__unused__))  argc, char *argv[])
{
	int a, b;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oper = argv[2];

	if (oper[1] != '\0' || get_op_func(oper) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '%' && b == 0) ||
		(*oper == '/' && b == 0))
		{
			printf("Error\n");
			exit(100);
		}
	printf("%d\n", get_op_func(oper)(a, b));
	return (0);
}
