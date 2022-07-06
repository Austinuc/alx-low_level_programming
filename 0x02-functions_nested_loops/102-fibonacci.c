#include <stdio.h>
/**
  * main - Prints the 1st 50 Fibonacci numbers starting with 1 and 2
  * numbers separated by comma and space with newline at the end of
  * the series
  *
  * Return: Always 0
  */
int main(void)
{
	int i = 1;
	int j = 2;
	int count;
	int next;

	for (count = 2; count <= 50; count++)
	{
		next = i + j;
		printf("%d, ", next);
		i = j;
		j = next;
	}
	printf("\n");

	return (0);
}
