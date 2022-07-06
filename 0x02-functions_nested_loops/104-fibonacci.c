#include <stdio.h>
/**
  * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
  * Return: Always 0
  */
int main(void)
{
	long a = 1;
	long b = 2;
	long next;
	long count;

	printf("%ld, %ld", a, b);
	for (count = 2; count < 98; count++)
	{
		next = a + b;
		a = b;
		b = next;
		printf(", %ld");
	}
	printf("\n");

	return (0);
}
