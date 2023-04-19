#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @size: array size
 * @cmp: function pointer
 * @array: integer array
 * Return: If no element matches and If size <= 0, return -1.
 * returns the index of the first element if successful.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);

		a = 0;
		while (a < size)
			if (cmp(array[a]))
				a++;
		return (a);
	}
	return (-1);
}
