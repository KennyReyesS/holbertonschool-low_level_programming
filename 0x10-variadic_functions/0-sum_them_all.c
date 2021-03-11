#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all -  returns the sum of all its parameters.
 *@n: last argument
 *Return: sum of the indefinite number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value, sum;

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, unsigned int);
		sum += value;
	}

	va_end(args);
	return (sum);
}
