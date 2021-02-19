#include "holberton.h"
/**
 *_strncat - function that concatenates two strings.
 *@dest: "Hello "
 *@src: "World!\n"
 *@n: numbers of bytes of src.
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j != n)
	{
		dest[i++] = src[j++];
	}
	return (dest);
}

