#include "holberton.h"
/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: char string.
 *Return: 0
 */
void puts_half(char *str)
{
	int n;
	int length;
	
	n = 0;
	while (str[n])
	{
		n++;
	}
	length = n / 2;
	if (length % 2)
	{
		n += 1;
	}
	for (n = n / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
