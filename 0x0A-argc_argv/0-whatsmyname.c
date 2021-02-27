#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that prints its name, with a new line.
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
