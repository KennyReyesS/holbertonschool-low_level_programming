#include "holberton.h"
/**
 *_strcpy - Copies the string pointed to by src, including the (\0), to dest.
 *@dest: char
 *@src: char
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count++] = '\0';
	return (dest);
}
