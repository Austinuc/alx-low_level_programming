#include <stdio.h>
/**
  * main - computes sum of all multiples of 3 or 5 below 1024
  * Return: Always 0
  */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("Sum of 3, 5 multiples below 1024 is: %d\n", sum);

	return (0);
}
