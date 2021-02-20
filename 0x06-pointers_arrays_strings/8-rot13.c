#include "holberton.h"
/**
 *rot13 - function that encodes a string using rot13.
 *@s: char string
 *Return: s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char letr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (letr[j] == s[i])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
