#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - function that return the length of the string
 *@s: string
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 *string_nconcat - function that concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: str (string concatenated)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0;
	unsigned int sl1, sl2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}
	sl1 = _strlen(s1);
	sl2 = _strlen(s2);
	if (n > sl2)
	{
		n = sl2;
	}

	str = malloc(sizeof(char) * sl1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sl1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
