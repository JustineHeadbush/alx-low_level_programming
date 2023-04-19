#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @size: array size
 * @array: integer array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action && array)
		for (a = 0; a < size; a++)
			action(array[a]);
}
