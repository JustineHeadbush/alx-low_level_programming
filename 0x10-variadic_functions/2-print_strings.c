#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator:  string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: the variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringy;
	unsigned int a;
	char *strng;

	va_start(stringy, n);

	for (a = 0; a < n; a++)
	{
		strng = va_arg(stringy, char *);

		if (strng == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("%s", strng);
	}
	if (separator != NULL && a < (n - 1))
	{
		printf("%s", separator);
	}
	}
	va_end(stringy);

	printf("\n");
}
