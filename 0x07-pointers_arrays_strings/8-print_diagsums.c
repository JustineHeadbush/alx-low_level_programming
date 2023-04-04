#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to an array
 * @size: an integer
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	while (num1 < size)
	{
	num2 = num2 + a[num1 * size];
	num3 = num3 + a[num1 * size - num1];
	num1++;
	}
	printf("%d\n", num2);
	printf("%d\n", num3);
}
