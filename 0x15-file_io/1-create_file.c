#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to wrtite to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, write_bytes;

	/*check if the name of the file is NULl*/
	if (filename == NULL)
	{
		return (-1);
	}

	/* open the file with O-CREATE, O_WRNOLY, O_TRUNC */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	/*if text_content is NULL, write nothing to the file*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/*calculate length of text_content*/
	for (i = 0; text_content[i]; i++)
		;
	/*write text_content to the file*/
	write_bytes = write(fd, text_content, i);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	/*close file and return 1 on success*/
	close(fd);
	return (1);
}
