#include "holberton.h"
/**
 *puts2 - prints 02468, followed by a new line.
 *@str: char string
 *Return: 0
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
