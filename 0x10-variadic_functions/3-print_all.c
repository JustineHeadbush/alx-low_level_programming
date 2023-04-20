#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void my_char(va_list form);
void my_float(va_list form);
void my_string(va_list form);
void my_int(va_list form);

/**
 * my_char - prints a character
 * @form: points to the character printed
 */
void my_char(va_list form)
{
	char ch;

	ch = va_arg(form, int);
	printf("%c", ch);
}
/**
 * my_float - prints a float
 * @form: points to float printed
 */
void my_float(va_list form)
{
	float fl;

	fl = va_arg(form, double);
	printf("%f", fl);
}
/**
 * my_string - prints string
 * @form: points to string printed
 */
void my_string(va_list form)
{
	char *st;

	st = va_arg(form, char *);
	if (st == NULL)
	{
		printf("nil");
	}
	printf("%s", st);
}
/**
 * my_int - prints integer
 * @form: points to integer printed
 */
void my_int(va_list form)
{
	int in;

	in = va_arg(form, int);
	printf("%i", in);
}
/**
 * prints_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments
 * Description: if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list forms;
	char *sep = 0;
	int a = 0, b;
	prints_t oper[] = {
		{"c", my_char},
		{"f", my_float},
		{"s", my_string},
		{"i", my_int},
	};

	va_start(forms, format);

	while (format && format[a])
	{
		b = 0;

		while (b < 4 && format[a] != *(oper[b].sign))
			b++;

		if (b < 4)
		{
			printf("%s", sep);
			oper[b].printer(forms);
			sep = ", ";
		}

		a++;
	}
	va_end(forms);
	printf("\n");
}
