#include "holberton.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: char "Hello "
 *@src: char "World!\n";
 *Return: dest <= '\0'
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
