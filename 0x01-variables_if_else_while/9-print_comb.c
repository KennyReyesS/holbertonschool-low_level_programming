#include<stdio.h>
/**
 *main - Prints all possible combinations of single-digit numbers, with ","
 *
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
