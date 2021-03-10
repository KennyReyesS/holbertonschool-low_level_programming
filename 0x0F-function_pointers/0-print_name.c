#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_name - prints a name.
 *@name: name to print
 *@f: function pointer of print_name
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
