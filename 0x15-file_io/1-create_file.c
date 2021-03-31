#include "holberton.h"

/**
 *_strlen - prints the length of the string.
 *@s: string.
 *Return: length of the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 *create_file - function that creates a file.
 *@filename: name of the file to create.
 *@text_content: is a NULL terminated string to write to the file.
 *Return: 1 or -1 on failure (file can not be created,
 *file can not be written, write fails, etc).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr_str;
	int len = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	wr_str = write(fd, text_content, len);

	if (wr_str == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
