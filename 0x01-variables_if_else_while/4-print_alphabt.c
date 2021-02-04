#include<stdio.h>
/**
 *main - prints the alphabet in lowercase (except q and e)
 *
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != "q" && a != "e")
		{
			putchar(a);
		}
	}
		putchar('\n');
		return (0);
}
