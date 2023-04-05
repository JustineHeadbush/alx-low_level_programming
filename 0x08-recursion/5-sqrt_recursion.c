#include "main.h"
/**
 * calculate_square_root - calculates the square root of
 * @i: number who's square root will be found
 * @j: the number to be squared
 * Return: -1 if the number does not have a square root
 *         return j if there is a square root
 */
int calculate_square_root(int i, int j)
{
	if (j <= 0)
	{
		return (-1);
	}
	if (i == j * j)
	{
		return (j);
	}
	else
		return (calculate_square_root(i, j + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number who's square root will be checked
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (calculate_square_root(n, n + 1));
}
