#include<stdio.h>
/**
 *main - Prints numbers 0-9 and not allowed to use any variable of type char.
 *
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
