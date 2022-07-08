#include <stdio.h>

/**
  * main - prints Fizz for multiples of 3, Buzz for multiples of
  * 5, FizzBuzz for multiples of 3 & 5, then the number for others
  * starting from 1 to 100
  *
  * Return: Always 0
  */

int main(void)
{
	int i = 1;

	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
