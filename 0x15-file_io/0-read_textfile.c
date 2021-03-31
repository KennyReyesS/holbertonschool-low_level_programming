#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of the file.
 *@letters: number of letters it should read and print.
 *Return: the actual number of letters it could read and print. 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nr_bytes, wr_bytes;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	nr_bytes = read(fd, buf, letters);
	if (nr_bytes == -1)
	{
		return (0);
	}
	wr_bytes = write(STDOUT_FILENO, buf, nr_bytes);
	if (wr_bytes == -1)
	{
		return (0);
	}
	close(fd);
	return (wr_bytes);
}
