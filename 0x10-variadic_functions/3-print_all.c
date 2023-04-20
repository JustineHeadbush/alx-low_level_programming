#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...);
void my_char(va_list form);
void my_float(va_list form);
void my_string(va_list form);
void my_int(va_list form);

/******/
void my_char(va_list form)
{
	char ch;
	ch = va_arg(form, int);
	printf("%c", ch);
}
/******/
void my_float(va_list form)
{
	float fl;
	fl = va_arg(form, double);
	printf("%f", fl);
}
/******/
void my_string(va_list form)
{
	char *st;
	st = va_arg(form, char *);
	printf("%s", st);
}
/******/
void my_int(va_list form)
{
	int in;
	in = va_arg(form, int);
	printf("%i", in);
}
/******/
void print_all(const char * const format, ...)
{
	va_list forms;
	char *sep = "";
	int a = 0;
	int b = 0;
	print_t functions[] = {
		{"c", my_char},
		{"f", my_float},
		{"s", my_string},
		{"i", my_int},
	};
	
	va_start(forms, format);

	while (format != NULL && (*(format + a)
	{
		b = 0;
		while (b < 4 && format[a] != *(functions[b].symbol))
			b++;

		if (b < 4)
		{
			printf("%s", sep);
			functions[b].print(forms);
			sep = ", ";
		}

		a++;
	}

	printf("\n");

	va_end(forms);
}
