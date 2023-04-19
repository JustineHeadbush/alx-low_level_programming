#include "3-calc.h"

int op_sub(int a, int b);
int op_mul(int a, int b);
int op_add(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);

/**
 * op_sub - subtracts
 * @a: number b will be subtracted from
 * @b: number that will be subtracted from a
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_add - adds
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mod - finds the module
 * @a: first number
 * @b: the second number
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 * op_div - divides
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
