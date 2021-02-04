#include<stdio.h>
/**
 *main - Prints the lowercase alphabet in reverse, followed by new line
 *
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
