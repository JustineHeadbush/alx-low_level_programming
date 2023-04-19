#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name.
 * @name: the name that will be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
