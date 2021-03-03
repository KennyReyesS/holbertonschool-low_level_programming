#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - count the length of the string
 *@s: string
 *Return: count
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}
/**
 *str_concat - function that concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: a = string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int str1, str2, str3, i;
	char *a;

	str1 = _strlen(s1);
	str2 = _strlen(s2);
	str3 = str1 + str2 + 1;
	a = malloc(str3);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < str2; i++)
	{
		a[i + str1] = s2[i];
	}
	a[str3] = '\0';
	return (a);
}
