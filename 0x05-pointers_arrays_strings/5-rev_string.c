#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: The string that will be reversed.
 */
void rev_string(char *s)
{
	int length = 0, n = 0;
	char m;

	while (s[n++])

		length++;

	for (n = length - 1; n >= length / 2; n--)
	{
		m = s[n];
		s[n] = s[length - n - 1];
		s[length - n - 1] = m;
	}
}
