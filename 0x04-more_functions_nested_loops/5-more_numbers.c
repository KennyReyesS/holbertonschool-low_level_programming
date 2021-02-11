#include "holberton.h"
void more_numbers(void)
{
	int cont;
	int n;

	for (cont = 0; cont < 10; cont++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
