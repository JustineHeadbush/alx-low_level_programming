#include "3-calc.h"
/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user.
 * @s:  the operator passed as argument to the program.
 * Return: a pointer to the function 
 */
int (*get_op_func(char *s))(int, int)
{
	func_t oper[] = {
	{"-", op_sub},
	{"%", op_mod},
	{"*", op_mul},
	{"+", op_add},
	{"/", op_div},
	{NULL, NULL}
	};
	int a;

	for (a = 0; a < 15; a++)
	{
		if(s[0] == oper->oper[a])
			break;
	}
	return (oper[a / 2]);
}
