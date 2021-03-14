#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@argc: argument count
 *@argv: array of arguments
 *Return: operation value of num1 with num2
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1;
	int num2;

	if (argc > 4)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	f = get_op_func(argv[2]);
	num2 = atoi(argv[3]);
	if (!f)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
