#include "main.h"
/**
 * leet - that encodes a string into 1337
 * @s: the string that will be encoded
 *
 * Return: @s
 */
char *leet(char *s)
}
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] ||
			    s[i] - 32 == leet[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}

