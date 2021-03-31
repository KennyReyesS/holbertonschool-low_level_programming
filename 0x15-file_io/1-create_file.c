#include "holberton.h"

/**
 *create_file - function that creates a file.
 *@filename: name of the file to create.
 *@text_content: is a NULL terminated string to write to the file.
 *Return: 1 or -1 on failure (file can not be created,
 *file can not be written, write fails, etc).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr_str, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	wr_str = write(fd, text_content, i);

	if (wr_str == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
