#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - prints strings, followed by a new line.
 *@separator: string to be printed between the strings.
 *@n: number of strings passed to the function
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nprint;
	unsigned int i;
	char *str;

	va_start(nprint, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nprint, char *);
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
			if (separator == NULL)
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(nprint);
}
