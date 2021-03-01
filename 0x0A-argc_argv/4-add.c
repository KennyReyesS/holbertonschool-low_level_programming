#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_is_digit - function that return 1 if is digit
 *@s: check the string
 *Return: 0 or 1
 */
int _is_digit(char *s)
{
	if (*s >= 48 && *s <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 *main - adds positive numbers.
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (_is_digit(argv[i]))
		{
		sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
