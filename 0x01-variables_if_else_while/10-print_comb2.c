#include <stdio.h>
/**
 *main - Prints the numbers from 00 to 99 with ','
 *
 *Return: 0
 */
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a == '9' && b == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		b++;
		}
	a++;
	}
	putchar('\n');
	return (0);
}
