#include "main.h"
/**
 * find_prime_number - checks what the number is divisible by
 * @i: the number
 * @j: the number that i is divisible by
 * Return: 0 if i is not a prime number
 * 1 if i is a prime number
 */
int find_prime_number(int i, int j)
{
	while (i % j == 0 && j != 1)
	{
		return (0);
	}
	if (i == j)
	{
		return (1);
	}
	return (find_prime_number(i, j + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number that will be chevked
 * Return: 1 if n is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_prime_number(n, 2));
	}
}
