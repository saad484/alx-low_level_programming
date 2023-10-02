#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_bytes, write_bytes;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (write_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (write_bytes);
}
