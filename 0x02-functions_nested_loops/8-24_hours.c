#include "holberton.h"
/**
 *jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 *Return: 0
 */
void jack_bauer(void)
{
	char i;
	char j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
