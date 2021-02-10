#include "holberton.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: 0
 */
void times_table(void)
{
	int num1, num2;
	int prod, prodU, prodD;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		for (num2 = 1; num2 <= 9; num2++)
		{
			prod = num1 * num2;
			prodU = prod % 10;
			prodD = prod / 10;

			if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prodD + '0');
				_putchar(prodU + '0');
			}
		}
		_putchar('\n');
	}
}
