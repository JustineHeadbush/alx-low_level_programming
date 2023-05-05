#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '\0')
			res = res * 2;
		else if (b[a] == '1')
			res = res * 2 + 1;
		else
			return (0);
	}
	return (res);
}
