#include "main.h"
/**
 * int _islower - check the code
 * Description: a function that checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
