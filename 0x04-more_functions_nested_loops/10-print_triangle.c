#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int num1;
	int num2;

	if (size > 0)
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			for (num2 = 1; num2 <= num1; num2++)
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}

	_putchar('\n');
}
