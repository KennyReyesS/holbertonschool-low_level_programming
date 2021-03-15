#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_char - print the char
 *@list: char to print
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *print_int - print the int
 *@list: int to print
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 *print_float - print the float
 *@list: float to print
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 *print_str - print the string
 *@list: string to print
 */
void print_str(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 *print_all - function that prints anything.
 *@format: list of types of arguments passed to the funcion.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	char *separator = "";

	f_dt check_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (check_f[j].c != NULL)
		{
			if (format[i] == *check_f[j].c)
			{
				printf("%s", separator);
				check_f[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
