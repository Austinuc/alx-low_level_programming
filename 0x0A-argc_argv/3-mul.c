#include <stdio.h>

/**
  * main - prints the products of two input numbers
  * @argc: argument count
  * @argv: array of arguments
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (*(argv[argc - 1]) - 48) * (*(argv[argc - 2]) - 48));
	return (0);
}
