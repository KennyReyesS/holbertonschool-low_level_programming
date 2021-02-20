#include "holberton.h"
/**
 *leet - function that encodes a string into 1337.
 *@s: string
 *Return: s
 */
char *leet(char *s)
{
	int i;
	int j;
	char letr[] = "aAeEoOtTlL";
	char numb[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			if (letr[j] == s[i])
			{
				s[i] = numb[j];
			}
		}
	}
	return (s);
}
