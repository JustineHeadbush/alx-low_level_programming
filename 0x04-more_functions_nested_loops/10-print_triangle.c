#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int num1;
	int num2;
	int num3;

	if (size > 0)
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			for (num2 = num1; num2 < size; num2++)
			{
				_putchar(' ');
			}
			for (num3 = 1; num3 <= num1; num3++)
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}

	_putchar('\n');
}
