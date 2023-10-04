#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* open file with O_APPEND */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if text_content is NULL, write nothing to the file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* calculate length of text_content */
	for (len = 0; text_content[len]; len++)
		;

	/* write text_content to the file */
	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	/* close file and return 1 on success */
	close(fd);
	return (1);
}
