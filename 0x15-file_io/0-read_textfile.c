#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: string representing the filename to read
  * @letters: number of letters to reaad and print
  *
  * Return: number of letters printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buf;

	if (!(filename) || (fd = open(filename, O_RDONLY) == -1))
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	nread = read(ptr, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);

	free(buf);

	return (nwrite);
}
