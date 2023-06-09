#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tempValue;

	for (i = 0; i < (n / 2); i++)
	{
		tempValue = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tempValue;
	}
}
