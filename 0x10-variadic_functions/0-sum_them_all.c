#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The parameters to be added
 * @...: number of parameters to be added
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int a, result = 0;

	va_start(add, n);

	for (a = 0; a < n; a++)
	{
		result = result + va_arg(add, int);
	}
	va_end(add);

	return (result);
}
