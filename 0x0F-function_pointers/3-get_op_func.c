#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user.
 * @s:  the operator passed as argument to the program.
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"-", op_sub},
	{"%", op_mod},
	{"*", op_mul},
	{"+", op_add},
	{"/", op_div},
	{NULL, NULL}
	};
	int a = 0;

	while (ops[a].op != NULL)
    {
        if (*(ops[a].op) == *s)
            return (ops[a].f);
        a++;
    }

    return (NULL);
}
