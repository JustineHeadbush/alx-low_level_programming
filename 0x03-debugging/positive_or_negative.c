#include "main.h"
/**
 * positive_or_negative - tests if number is + or -
 * @i: the number being checked
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i == 0)
		printf("%d  is zero\n", i);

	else
		printf("%d is negative\n", i);
}
