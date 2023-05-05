#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number @n will flip to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int x_or = n ^ m;

	while (x_or != 0)
	{
		if (x_or & 1)
		{
			num++;
		}

		x_or >>= 1;
	}
	return (num);
}
