#include "main.h"

/**
  * create_file - creates a file if not already existing and writes to it
  * @filename: name of file to create
  * @text_content: strings to write to the newly created file
  *
  * Return: 1 on success or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t strlen = 0;
	ssize_t nwrite;

	while (*(text_content + strlen) != '\0')
		strlen++;
	if (!(filename))
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	nwrite = write(fd, text_content, strlen);
	if (nwrite == -1 || (size_t)nwrite < strlen)
		return (-1);
	close(fd);
	return (1);
}
