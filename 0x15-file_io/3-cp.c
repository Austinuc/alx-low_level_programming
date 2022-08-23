#include "main.h"

/**
  * error_check - checks for file errors
  * @fd_fr: file descriptor of source file
  * @fd_to: file descriptor of the destination file
  * @argv: list containing file names
  *
  * Return: no return
  */

void error_check(int fd_fr, int fd_to, char *argv[])
{
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
  * main - Copies the content of a file to another file
  * @argc: command line argument count
  * @argv: array of command line input strings
  *
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int fd_fr, fd_to, ncp = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	error_check(fd_fr, fd_to, argv);

	while (ncp == 1024)
	{
		ncp = read(fd_fr, buff, 1024);
		if (ncp == -1)
			error_check(-1, 0, argv);
		ncp = write(fd_to, buff, ncp);
		if (ncp == -1)
			error_check(0, -1, argv);

	}
	if (close(fd_fr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_fr);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_to);
		exit(100);
	}
	return (0);
}
