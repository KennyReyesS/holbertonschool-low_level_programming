#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *get_op_func - selects the correct function to perform the operation asked.
 *@s: operator passed as argument to the program.
 *Return: the pointer to the funciont asked by the user.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
