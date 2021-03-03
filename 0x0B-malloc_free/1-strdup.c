#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - function that store the length of a string
 *@s: string
 *Return: count length of the string
 */
char _strlen(char *s)
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
 *_strcpy - Copies the string pointed to by src, including the (\0), to dest.
 *@dest: string 1
 *@src: string 2 to be copied
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; count < src[count]; count++)
	{
		dest[count] = src[count];
	}
	dest[count++] = '\0';
	return (dest);
}
/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *
 *@str: string original.
 *Return: strd string with the copy of the string original.
 */
char *_strdup(char *str)
{
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}
	strd = malloc(_strlen(str) + 1);
	if (strd == NULL)
	{
		return (NULL);
	}
	_strcpy(strd, str);
	return (strd);
}
