#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number that will be raised to the power of y
 * @y: the power that x will be raised to
 * Return: -1 if y < 0. 1 if y = 0.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
