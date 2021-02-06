#include <stdio.h>
/**
 *main - Prints all possible different combinations of two digits.
 *
 *Return: 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = n1 + 1; n2 < 58; n2++)
		{
			putchar(n1);
			putchar(n2);

			if (n1 == 56 && n2 == 57)
			{
			}
			else
			{
				putchar(';');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
