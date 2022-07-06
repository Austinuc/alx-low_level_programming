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
	long i = 0;
	long j = 1;
	int count;
	long next;

	for (count = 0; count < 50; count++)
	{
		next = i + j;
		printf("%ld", next);

		if (count != 49)
		{
			printf(", ");
		}

		i = j;
		j = next;
	}
	printf("\n");

	return (0);
}
