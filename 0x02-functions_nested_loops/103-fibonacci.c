#include <stdio.h>
/**
  * main - Prints the even Fibonacci terms <= 4,000,000
  * Return: Always 0
  */
int main(void)
{
	long a = 1;
	long b = 2;
	long next;
	long sum_even = 0;

	while (sum_even <= 4000000)
	{
		if ((b % 2) == 0)
		{
			sum_even += b;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%ld\n", sum_even);

	return (0);
}
