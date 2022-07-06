#include <stdio.h>
/**
  * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
  * Return: Always 0
  */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;
	int count, overflow;
	unsigned long a_head, a_tail, b_head, b_tail, next_head, next_tail;

	printf("%lu, %lu", a, b);
	for (count = 2; count < 92; count++)
	{
		next = a + b;
		a = b;
		b = next;
		printf(", %lu", b);
	}

	a_head = a / 1000000000; /* break larger num into 2 parts */
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (; count < 98; count++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		next_tail = (a_tail + b_tail) - (1000000000 * overflow);
		next_head = (a_head + b_head) + overflow;

		printf(", %lu%lu", next_head, next_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = next_head;
		b_tail = next_tail;
	}
	printf("\n");

	return (0);
}
